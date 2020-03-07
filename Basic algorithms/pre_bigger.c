#include <stdio.h>

int main()
{
    double pre, cur;
    int A[10]={0}, counter=0, num=0;

    scanf("%lf", &pre);

    while (pre != 0){
        scanf("%lf", &cur);
        counter ++ ;

        if ((pre > cur) && (cur > 0)){
            num ++;
            A[counter-1] = counter;
        }
        pre = cur;
    }
    printf("%d\n", num);

    for (int i = 0; i < 10; i++){
        if (A[i] != 0)
            printf("%d ", A[i]);
    }

    return 0;
}