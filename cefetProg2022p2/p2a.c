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


#include<unistd.h>

void putchar(char c)
{
    write(1, &c, 1)
}

void    put_nmbr(int x)
{


    if (x < 0)
    {
        x = x * -1;
        write(1, "-", 1);
    }
    if (x > 9)
    {
        put_nmbr(x / 10);
        put_nmbr(x % 10);
    }
    else
        putchar(x+48);


}

int main()
{}