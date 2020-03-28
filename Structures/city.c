#include <stdio.h>

typedef struct {
    char *name, *population1;
    int population2;
} city;

int main() {
    city NY, LA, *ptr;
    NY.name = "New York";
    NY.population1 = "8 623 000";
    printf("%s %s\n",NY.name, NY.population1);

    //  или
    NY.population2 = 8623000;
    printf("%s %d\n",NY.name, NY.population2);

    //  или указатели на структуру
    ptr = &LA;
    ptr->name = "Los Angels";
    ptr->population1 = "3 831 000";
    printf("%s %s\n",ptr->name, ptr->population1 );

}