#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n_str[10];
    int n;
    fgets(n_str, 10, stdin);
    n = atoi(n_str);
    for(n;n>=0;n--){
        printf("%d\n", n);
    }
}