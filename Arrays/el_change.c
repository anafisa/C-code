#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
    int a[N]; /* массив a размера N */
    int i, s, max, min, pos1, pos2;/* счетчик */

    srand(time(NULL)); /* начальное значение генератора ПСЧ */

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
    a[pos1] = min;
    a[pos2] = max;
    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }

    return 0;
}