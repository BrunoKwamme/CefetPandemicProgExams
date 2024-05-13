#include <stdio.h>
#include <stdlib.h>
#define tamanho(vetor) (sizeof((vetor)) / sizeof(int))

/*int soma(int* vet, int num){
    int sum = 0;
    for(int i = 0; i < num; i++){
        sum = vet[i] + sum; 
    }
    return sum;
}

int prod(int* vet, int num){
    int mult = 1;
    for (int i = 0; i < num; i++){
        mult = vet[i] * mult;
    }
    return mult;

}

int check(int* vet, int nn){
    int passos = 0;
    for (int i = 0; i < nn; i++){
        if (vet[i] == 0){
            vet[i]++;
            passos++;
        }
    }
    return passos;
}

int main(){
    int t, n, d;
    int b = 0;
    int c = 1;
    int a[100];
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        for (int j = 0; j < n; j++){
            d = 0;
            scanf("%d", &a[j]);
        
        }
        if (prod(a,n) == 0){
            d+=check(a,n);
        }
        if (soma(a,n) == 0){
            for (int k = 1; k < n; k++){
                if (a[k] != -1){
                    a[k]++;
                    break;
                }
            }
            d++;
        }
    printf("%d\n", d);
    }
    return 0;
}*/

int main(){
    int vet[10] = {1, 2, 3, 4};
    //printf("%d\n", sizeof(vet) / sizeof(vet[0]));
    //printf("%d\n", vet[3]);
     printf("%d\n", vet[5]);

    return 0;
}

