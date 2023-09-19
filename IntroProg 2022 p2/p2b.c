#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int cmpf(const void *x, const void *y){
    const char *a = x,*b = y; 
    return (strcmp(a,b));
}

int main (){
    int n,tam;
    int i = 0;
    scanf("%d", &n);
    while (i < n){
        scanf("%d", &tam);
        int k = 0;
        char *s;
        s = (char*) malloc((tam+1)*sizeof(char));
        char *aux;
        aux = (char*) malloc((tam+1)*sizeof(char));
        scanf("%s", s);
        strcpy(aux,s);
        qsort(s, tam, sizeof(char), cmpf);
        for(int x = 0; x < tam; x++){
            if (s[x] != aux[x])
                k++;
        }
        i++;
        printf("\n%d", k);
        free(s);
        free(aux);
    }
    return 0;
}

