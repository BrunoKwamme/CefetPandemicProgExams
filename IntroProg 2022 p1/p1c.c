#include <stdio.h>
#include <stdlib.h>

int h[100000000];

int cmpf (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main (){
    int n, k, difer, comparar, x;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++){
        scanf("%d", &h[i]);
    }

    qsort(h, n, sizeof(int), cmpf);

    x = k-1;
    difer = 0;
    comparar = 999999999;
    for (int i = 0; i < n-k+1; i++){
        difer = h[x] - h[i];
        x++;
        if (difer < comparar){
            comparar = difer;
        }
    }
    printf("%d", comparar);

    return 0;
}