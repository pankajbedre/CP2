#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    
    int eM[n-1][n-1];
    for(i = 0; i <n; i++) {
        for(j = 0; j < n; j++) { 
            eM[i][j] = 0;
        }
    }
    
    int a, b;
    for(i = 0; i < m; i++) {
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
    
    int vC[n-1];
    for (i = 0; i < n; i++) {
        vC[i] = 0;
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(eM[i][j]) {
                if(vC[i]) {
                    if (vC[j]) {
                        if(vC[i] == vC[j]) {
                            printf("Not Bicolor");
                        }
                    } else {
                        if(vC[i] == "red") {
                            vC[j] = "blue"
                        } else {
                            vC[j] = "red";
                        }
                    }
                } else {
                    vC[i] = 1;
                    if (vC[j]) {
                        if(vC[i] == vC[j]) {
                            printf("Not Bicolor");
                        }
                    } else {
                        if(vC[i] == "red") {
                            vC[j] = "blue"
                        } else {
                            vC[j] = "red";
                        }
                    }
                }
            }       
        }
    }
    
   
}
