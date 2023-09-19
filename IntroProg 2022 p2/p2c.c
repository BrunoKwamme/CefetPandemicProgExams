#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int passo = 0;
    int *q, *k, *d;
    scanf("%d",&n);
    q = (int *) malloc( sizeof(int)*n);
    k = (int *) malloc( sizeof(int)*n);
    d = (int *) malloc( sizeof(int)*n);
    scanf("%d%d", &q[0],&q[1]);
    scanf("%d%d", &k[0],&k[1]);
    scanf("%d%d", &d[0],&d[1]);
    for (int i = 0; i < 2; i++){
        if ((q[i]-k[i])*(q[i]-d[i]) > 0)
            passo++;
    }
    if (passo == 2)
        printf("YES");
    else
        printf("NO");
    free(q);
    free(k);
    free(d);
    return 0;
}