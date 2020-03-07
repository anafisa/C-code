#include <stdio.h>

int main()
{
    double k, x=1;
    int res=0, counter=0;

    scanf("%lf", &k);

    while (x != 0){
        scanf("%lf", &x);
        counter ++ ;
        res = (x > k)? counter : res;
    }
    printf("%d", res);
    return 0;
}