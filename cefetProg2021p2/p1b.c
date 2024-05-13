#include <stdio.h>
#include <stdlib.h>

//QUESTAO B
int decrescente(const void *a, const void *b){
    const int *x = a, *y = b;

    if (x > y)
        return -1;

    if (x < y)
        return 1;

    return 0;
}

int main()
{
    int n, menor=2147483647, opcoes = 1, teste_menor;
    scanf("%d", &n);
    int q[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    qsort(q, n, sizeof(q[0]), decrescente);

    for (int i = 0; i < n-1; i++){
        teste_menor = abs(q[i]-q[i+1]);
        if (teste_menor < menor){
            menor = teste_menor;
            opcoes = 1;
        }else if (teste_menor == menor){
            opcoes += 1;
        }
    }
    printf("%d %d", menor, opcoes);
    return 0;
}