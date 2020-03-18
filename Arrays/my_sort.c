#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[N], b[N], num=2*N, c=0, min, pos;
    int i, d=0;
    srand(time(NULL));

    for (i = 0; i < N; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
    }

    min = a[0];
    pos = 0;
    printf("\n");

    while (c != N){
        for (i = 0; i < N; i++){
            if (a[i]< min){
                min = a[i];
                pos = i;}
        }
        b[c]= min;
        a[pos]= min = 10000;
        c++;
    }

    for (i = 0; i < N; i++){
        printf("%d ", b[i]);
    }
    return 0;

}



