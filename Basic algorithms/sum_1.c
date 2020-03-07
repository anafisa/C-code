#include <stdio.h>
#define N 10

int main()
{
    double sum=0,  A[N]= {6, 5, 1.1, 1, 5, 7.1, 1, 21, 5, 1};
    int first=0, last=0, f=0, i;

    for (i = 0; i < N; i++)
        if (A[i] == 1 ){
            if (f == 0){
                f++;
                first = i;
            }
            else
                last = i;
        }

        for (i = first + 1; i < last; i++)
            sum += A[i];


    printf("%.1f ", sum);

    return 0;
}