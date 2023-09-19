#include <stdio.h>
#include <stdlib.h>

int main(){
    //list = (usuarios *)malloc(sizeof (usuarios));
    int n, m, y;
    char k[1000];
    char* ptr;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++){
        scanf("%d", &y);
        for(int x = 0; x < y; x++){
            fgets(k,1000000,stdin);
        }
    }
    long int resp = strtol(k, &ptr, 16);
    printf("%li\n", resp);
    return 0;
}