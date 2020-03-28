#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    point a;
    point b;
} box;

point top = {15,25};
box rect = {1,5,10,50};
point bottom;


int main()
{
    bottom.x = 5;
    bottom.y = 1;
    printf("(%d %d) \n", bottom.x, bottom.y);
    printf("(%d %d) \n", rect.a.x, rect.a.y);
    printf("(%d %d) \n", top.x, top.y);



}