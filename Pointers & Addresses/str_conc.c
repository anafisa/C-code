#include <stdio.h>
#include <string.h>

char* concat(char *s1, char *s2) {

    int i = 0, j = 0;
    int len1 = strlen(s1), len2 = strlen(s2); // получаем длину каждой из строк

    char *result = (char *) malloc(len1 + len2 + 1); // определяем, сколько памяти необходимо для склеивания строк

    while (i != len1){
        result[i] = s1[i];    // добавляем первую подстроку
        i++;
    }
    while (j != len2){
        result[i+j] = s2[j];   // добавляем вторую подстроку
        j++;
    }

//    также можно было воспользоваться встроенной функцией
//    memcpy(result, s1, len1);
//    memcpy(result + len1, s2, len2 + 1);

    return result;
}

int main()
{
    char s1[] = "ab";
    char s2[]= "cd";
    puts(concat(s1, s2));

    return 0;
}