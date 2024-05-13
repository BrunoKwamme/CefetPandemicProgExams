#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int c, l, k, t, i, j;
    int resultado = 0;
    int contador = 1;
    char string [100][100];
    scanf("%d", &t);
    for (int x = 0; x < t; x++){
        scanf("%d%d%d", &c, &l, &k);
        for (i=0; i<c; i++){
            for (j=0; j<l; j++){
                scanf ("%s", &string[i][j]);
            }
        }
        for (i = c; i >= 0 ; --i){
            if (resultado > 0)
                break;
            for (j = l; j >= 0; --j){
                if (resultado > 0)
                    break;
                if(string[i][j] == '*'){
                    for (contador = 1; contador <= k; contador++){
                        if(string[i-contador][j-contador] != '*' && string[i-contador][j+contador] != '*'){
                            if(string[i+contador][j-contador] != '*' || string[i+contador][j+contador] != '*'){
                                if((string[i+1][j-1] != '*' && string[i-1][j+1] != '*') || (string[i-1][j-1] != '*' && string[i+1][j+1] != '*')){
                                    resultado++;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (resultado == 0)
            printf("Yes\n");
        else 
            printf("No\n");
    }
    return 0;
}