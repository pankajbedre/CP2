#include <stdio.h>  
int main()  
{  
    int n1, n2, i, GCD_Num, j,k;  
    printf ( " Enter any two numbers: \n ");  
    scanf ( "%d %d", &n1, &n2);   
      
    for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            GCD_Num = i; 
    }   
    
    for(k=n1; k>=-1; k--) {
        for(j=n2; j>=0;  j--) {
            if(k*n1 + j*n2 == GCD_Num) {
                printf("%d = X, %d = Y, %d = D", k,j, GCD_Num);
            }
        }
    }
    return 0;
}  
