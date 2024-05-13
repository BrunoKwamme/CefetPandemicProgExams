#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    char** pasto = (char**) malloc((n + 2)*(sizeof(char*)));
    for (i = 0; i < n+2; i++){
        pasto[i] = (char*) malloc((m + 2)*(sizeof(char)));
    }
    
    for (i = 0; i < n + 2; i++){
        pasto[i][0] = 'X';
        pasto[i][m+1] = 'X';
    }
    for (j = 0; j < m + 2; j++){
        pasto[0][j] = 'X';
        pasto[n+1][j] = 'X';
    }

    for (i = 1; i < n + 1; i++){
        for (j = 1; j < m + 1; j++){
            scanf(" %c", &pasto[i][j]);
            if (pasto[i][j] == '.')
                pasto[i][j] = 'D';
        }
    }
    
    /*
    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < m + 2; j++)
            printf(" %c", pasto[i][j]);
        putchar('\n');
    }*/
    for (i = 1; i < n + 1; i++){
        for (j = 1; j < m + 1; j++){
            if (pasto[i][j] == 'S'){
                if (pasto[i+1][j] == 'W' || pasto[i-1][j] == 'W' || pasto[i][j+1] == 'W' || pasto[i][j-1] == 'W'){
                    printf("No\n");
                    goto end;
                }
            }
        }
    }
    printf("Yes\n");
    for (i = 1; i < n + 1; i++){
        for (j = 1; j < m + 1; j++){
            printf("%c", pasto[i][j]);
        }
        printf("\n");
    }
    end:
    for (i = 0; i < n + 2; i++){
        free(pasto[i]);
    }
    free(pasto);
    return 0;
}
