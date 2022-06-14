#include <stdio.h>  
int main()  
{  
    int m, n, fact=1, i, b = 0;  
    printf ( " Enter any two numbers: \n ");   
    scanf ( "%d %d", &m, &n);   
      
    for (i = m; i>0; i--) {
        fact = fact * i;
    }
        if (fact%n == 0) {
            printf("%d divides %d", n, m);
        } else {
            printf("%d does not divides %d", n, m);
        }
    return 0;
}  
