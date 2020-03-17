#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[N];
    int i, m;
    srand(time(NULL));

    m = N%2 == 0  ? N : N+1 ;


    for(i = 0; i < N; i++){
        a[i] = rand()%100;
    }
    for(i = 0; i < N; i++){
        if (a[i] != a[N-i]){
            printf("No");
            return 1;}
    }
    printf("Yes");
    return 0;

}
