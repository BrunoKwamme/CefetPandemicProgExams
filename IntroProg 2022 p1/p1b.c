#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    char a[101], b[101];
    char segurar[101];
    scanf("%s", &a);
    scanf("%s", &b);
    strcpy(segurar, b);
    for (int i = 0; i < strlen(a); i++){
        b[0] = b[strlen(a)-1];
        for (int x = 1; x < strlen(a); x++){
            b[x] = segurar[x-1];
        }
        strcpy(segurar, b);
        if (strcmp(a,b) == 0){
            printf("Yes"); 
            break;
        }
    }
    if (strcmp(a,b) != 0)
        printf("No");

    return 0;
}