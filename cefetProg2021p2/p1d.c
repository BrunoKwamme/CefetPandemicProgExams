#include<stdio.h>
#include<stdlib.h>


int opA(int* vet, int num, int i){
    int resultado = 0;
    resultado = num * vet[i];
    return resultado;
}

int opCD(int v1, int v2, int c, int d){
    int resultado = 0;
    if (c < v1)
        v1 = c;
    if (c < v2)
        v2 = c;
    if (d < v1 + v2)
        resultado = d;
    else
        resultado = v1+v2;
    
    return resultado;
}

int main(){
    int v1 = 0;
    int v2 = 0;
    int a, b, c, d, n, m;
    int o[1000], t[1000];
    scanf("%d%d%d%d", &a, &b, &c, &d);
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++){
        scanf("%d", &o[i]);
        v1 += opA(o,a,i) < b ? opA(o,a,i) : b;
    }
    for (int i = 0; i < m; i++){
        scanf("%d", &t[i]);
        v2 += opA(t,a,i) < b ? opA(t,a,i) : b;
    }
    printf("%d\n", opCD(v1,v2,c,d));
           
    return 0;
}
