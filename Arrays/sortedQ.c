 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #define N 10

 int main()
 {
     int a[N];
     int i, x;

     srand(time(NULL));
     a[0] = rand()%100;
     x = a[0];

     for(i = 1; i < N; i++){
         a[i] = rand()%100;
         if (x < a[i])
             x = a[i];
         else {
             printf("No");
             return 1;
         }
     }

     printf("Yes");
     return 0;
 }