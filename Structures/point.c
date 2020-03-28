#include <stdio.h>

struct coords {
    int x;
    int y;
} point;

int main()
{
    point.x = 5;
    point.y = 1;
    printf("(%d %d)", point.x, point.y);

}