#include <stdio.h>

int main()
{
    int i, j, m, n,x,y;
    int chess[5][5] = {
        {25, 24, 23, 22, 21},
        {10, 11, 12, 13, 20},
        {9, 8, 7, 14, 19},
        {2, 3, 6, 15, 18},
        {1, 4, 5, 16, 17}
    };
    scanf("%d", &n);
    
    for(i = 0; i< 5; i++) {
        for(j = 0; j< 5; j++) {
            if(chess[i][j]== n){
                x = j + 1;
                y = 5- i;
                break;
            }
        }
    }
    printf("%d %d", x,y);
}
