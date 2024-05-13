#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int contador = 0;
    scanf("%d", &n);
    int a[n][n], matriz2[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            scanf("%ld", &a[i][j]);
    } 

    for(int i = 0; i < n; i++){    
        for(int k = 0; k < n; k++){
            for(int l = 0; l < n; l++)
                matriz2[k][l] = a[k][l];
        }
        for(int j = 0; j < n; j++){
            if(matriz2[i][j] == 0){
                for(int k = 0; k < n; k++){
                    if(matriz2[k][j] == 0){
                        matriz2[k][j] = 1;
                    }else{
                        matriz2[k][j] = 0;
                    }        
                }              
            }           
        }
        int igual = 0;
        for(int t = 0; t < n; t++){
                int sumlinha = 0;
                    for(int r = 0; r < n; r++){
                        sumlinha += matriz2[t][r];
                    }if(sumlinha == n){
                        igual++;
                    }
            }if(igual > contador){
                contador = igual;
            }
    }
    printf("%d", contador);
    return 0;
}