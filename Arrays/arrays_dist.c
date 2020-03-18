#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[N], b[N], num = 2*N;
    int i, j, d=0;
    srand(time(NULL));


    for (i = 0; i < N; i++){
        a[i] = rand()%10;
        b[i] = rand()%10;
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (a[i]== b[j])
                num--;
        }
    }
    printf("%d", num);
    return 0;

}




