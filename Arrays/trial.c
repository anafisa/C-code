#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[N], b[N];
    int i, j, d=0;
    srand(time(NULL));

    for (i = 0; i < N; i++){
        a[i] = rand()%100;
        b[i] = rand()%100;
    }

    for (i = 0; i < N; i++){
        for (j = i; j < N; j++){
            d++;}
    }

    printf("%d", d);
    return 0;

}



