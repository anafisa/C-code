#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[N];
    int i, max, min, pos1, pos2, s = 0;
    srand(time(NULL));

    a[0] = rand()%100;
    min = a[0];
    max = a[0];
    pos1 = 0;
    pos2 = 0;
    printf("%d ", a[0]);

    for(i = 1; i < N; i++){
        a[i] = rand()%100;
        if (a[i] > max){
            max = a[i];
            pos1 = i;
        }
        if (a[i]< min) {
            min = a[i];
            pos2 = i;
        }
        printf("%d ", a[i]);
    }

    printf("\n");
    if (pos1 < pos2){
        for(i = pos1+1; i < pos2; i++){
            s += a[i];}
    }
    else{
        for(i = pos2+1; i < pos1; i++){
            s += a[i];}
    }

    printf("%d ", s);
    return 0;
}