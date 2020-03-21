#include <stdio.h>
#include <string.h>

char* doub(char *s1) {

    int i = 0;
    int len1 = strlen(s1);

    char *result = (char *) malloc(len1*2 + 1); // определяем необходимое количество памяти

    while (i != len1){
        result[i] = s1[i];
        result[i+len1]= s1[i];
        i++;
    }

//    также можно было воспользоваться встроенной функцией
//    memcpy(result, s1, len1);

    return result;
}

int main()
{
    char s1[] = "abc";
    puts(doub(s1));

    return 0;
}