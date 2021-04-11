#include <stdio.h>
#include <stdlib.h>
#define N 30

int main()
{
    int v[N];
    int in[N];
    int f[N];
    int l[N];
    int i,j;
    int c=0;
    int lmax=0;
    int n;
    int inizio=0;

    printf("Numero di valori: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Inserire valore %d: ", i);
        scanf("%d",&v[i]);
    }

    for(i=0;i<n;i++){
        if(v[i]!=0 && inizio==0){
            inizio=1;
            in[c]=i;
        }
        if(v[i]==0){
            f[c]=i;
            l[c]=f[c]-in[c];
            if(l[c]>lmax){
                lmax=l[c];
            }
            c++;
            inizio=0;
        }
    }
    for(i=0;i<c;i++){
        if(l[i]==lmax){
            printf("Trovata sequenza: ");
            for(j=in[i];j<f[i];j++){
                printf("%d",v[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
