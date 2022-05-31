
#include <stdio.h>

int main()
{
    int n, m = 2, i, j;
    scanf("%d", &n);
    // scanf("%d", &m);
    
    int eM[n-1][n-1];
    for(i = 0; i <n; i++) {
        for(j = 0; j < n; j++) { 
            eM[i][j] = 0;
        }
    }
    
    int a, b;
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        scanf("%d", &b);
        
        eM[a][b] = 1;
    }
    for(i = 0; i <n; i++) {
        for(j = 0; j < n; j++) { 
            printf("%d \t",eM[i][j]);
        }
        printf("\n");
    }
    
    i = 0;
    j = 0;
    int bids = 0;
    while(bids < n){
        for (j = 0; j < n; j++) {
            if(eM[i][j]) {
                printf("%d \t %d \n", i, j);
                i = j;
                bids++;
                break;
            }
        }
    }
}
