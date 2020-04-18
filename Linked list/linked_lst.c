#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef int tData;

typedef struct sNode {
    tData value;
    struct sNode *next;
} tNode;

tNode *create_list(tData first_el) {
    tNode *p_begin = NULL;
    tNode *p = NULL;
    p_begin = (tNode *) malloc(sizeof(tNode));
    p = p_begin;
    p->next = NULL;
    p->value = first_el;
    return p_begin;
}

tNode *get_last_ptr(tNode *p_begin) {
    if (p_begin == NULL)
        return NULL;
    while (p_begin->next)
        p_begin = p_begin->next;
    return p_begin;
}

void add_to_list(tNode *p_begin, tData el) {
    tNode *last = get_last_ptr(p_begin);
    tNode *tmp = (tNode *) malloc(sizeof(tNode));
    tmp->value = el;
    tmp->next = NULL;
    last->next = tmp;
}

void print_list(tNode *p_begin) {
    tNode *p = p_begin;
    while (p != NULL) {
        printf("%d \t", p->value);
        p = p->next;
    }
}

tNode *get_pre_last(tNode *p_begin) {
    if (p_begin->next == NULL) {
        return NULL;
    }
    while (p_begin->next->next) {
        p_begin = p_begin->next;
    }
    return p_begin;
}

void delete_last(tNode **p_begin) {
    tNode *last = NULL;
    last = get_pre_last(*p_begin);
    if (last == NULL) {
        free(*p_begin);
        *p_begin = NULL;
    } else {
        free(last->next);
        last->next = NULL;
    }
}

void delete_list(tNode *p_begin) {
    tNode *p = p_begin;
    while (p != NULL) {
        tNode *tmp;
        tmp = p;
        p = p->next;
        free(tmp);
    }
}

int search_el(tNode *p_begin, tData val) {
    tNode *p = p_begin;
    int i = 1;
    while (p->value != val && p->next != NULL) {
        i++;
        p = p->next;
    }
    return i;
}

int input_check(char fun[256]){
    int el, len;
    el = atoi(fun);
    len = strlen(fun);
    if  (el<1 || el>7 || len!=1)
        return 0;
    else
        return el;
}


int main() {

    int f, n;
    char fun[256];
    tData first_el, el, val, index;
    tNode *p_begin = NULL;

    printf("Choose a function: \n");
    printf("1 - create the first  element \n");
    printf("2 - add  element  to  the end \n");
    printf("3 - delete   last     element \n");
    printf("4 - print     all    elements \n");
    printf("5 - delete    all    elements \n");
    printf("6 - search  for  the  element \n");
    printf("7 - FINISH    THE     PROGRAM \n");

    printf("Type № of the function: ");
    scanf("%s", fun);
    f= input_check(fun);

    while (f == 0){
        printf("INPUT ERROR\nPlease, type № of the function from 1 to 7: ");
        scanf("%s", fun);
        f = input_check(fun);

    }

    while (f != 7) {

        if (f == 1) {
            printf("Type the first element: ");
            n = scanf("%d", &first_el);
            if (n == 0){
                printf("INPUT ERROR\nOnly integer allowed !");
                return 1;}
            p_begin = create_list(first_el);}


        if (f == 2) {
            if (p_begin != NULL) {
                printf("Type the element: ");
                n = scanf("%d", &el);
                if (n == 0){
                    printf("INPUT ERROR\n Only integer allowed !");
                    return 1;}
                add_to_list(p_begin, el);
            } else
                printf("WARNING!\nNO elements in the list\n");
        }


        if (f == 3) {
            if (p_begin != NULL) {
                delete_last(&p_begin);
                printf("The last element was deleted\n");
            } else
                printf("WARNING!\nNO elements in the list\n");
        }

        if (f == 4) {
            if (p_begin != NULL) {
                print_list(p_begin);
                printf("\n");
            } else
                printf("WARNING!\nNO elements in the list\n");
        }

        if (f == 5) {
            if (p_begin != NULL) {
                delete_list(p_begin);
                p_begin = NULL;
                printf("The list was deleted\n");
            } else
                printf("WARNING!\nNO elements the the list\n");
        }

        if (f == 6) {
            if (p_begin != NULL) {
                printf("Type the value to search: ");
                n = scanf("%d", &val);
                if (n == 0){
                    printf("INPUT ERROR\nOnly integer allowed !");
                    return 1;}
                index = search_el(p_begin, val);
                if (index == 0)
                    printf("Element not found\n");
                else
                    printf("The position of %d is %d\n", val, search_el(p_begin, val));
            } else
                printf("WARNING!\nNO elements in the list\n");
        }
        printf("Type № of the function: ");
        scanf("%s", fun);
        f = input_check(fun);

        while (f == 0){
            printf("INPUT ERROR\nPlease, type № of the function from 1 to 7: ");
            scanf("%s", fun);
            f = input_check(fun);
        }
    }
}


