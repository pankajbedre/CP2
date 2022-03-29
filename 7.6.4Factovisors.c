#include <stdio.h>  
int main()  
{  
    int m, n, fact=1, i, b = 0;  
    printf ( " Enter any two numbers: \n ");   
    scanf ( "%d %d", &m, &n);   
      
    for (i = m; i>0; i--) {
        fact = fact * i;
    }
    printf("%d", fact);
    while(n*b < fact) {
        if (n*b == fact) {
            printf("%d divides %d", n, fact);
            break;
        } 
        b++;
    }
    return 0;
}  
