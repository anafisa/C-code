#include <stdio.h>
#include <string.h>

char* position(char *s1, char c) {

    int i=0;
    int len1 = strlen(s1);

    while (s1[i] != c && i!=len1){
        i++;
    }

    return i;
}

int main()
{
    char s1[] = "abcfpyt", c='y';
    printf("%d", position(s1, c)+1);

    return 0;
}