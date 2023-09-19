#include <stdio.h>
#include <stdlib.h>


int main (){
    int x = 0;
    int rodadas = 0;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    n = 0;
    int div = 0;
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < len;i++){
        if (a[i]%2 == 0 && div == 0){
            a[i] = a[i]/2;
            rodadas++;
            i--;
        }
    }
    printf("%d", rodadas);

    return 0;
}