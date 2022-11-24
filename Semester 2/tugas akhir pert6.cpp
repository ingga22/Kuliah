#include <stdio.h>

main() {
    int a, b, c, i;
    i = 0;
    a = 0;
    b = 1;
   
    printf("Fibonacci : ");
    printf("%d ", a);
    printf("%d ", b);
   
    while (i<11) {
        c = a + b;
        a = b;
        b = c;
       
        printf("%d ",c);
        i++;
    }   
}
