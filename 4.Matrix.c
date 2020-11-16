#include<stdio.h>

void main() {
    int row,col,i,j,arr[10][10],tarr[10][10];
    printf("\n Enter the number of rows :");
    scanf("%d",&row);
    printf("\n Enter the number of columns :");
    scanf("%d", &col);
    
    printf("\n Enter the elements of the matrix :");
        for(i = 0;i < row;i++) {
            for(j = 0;j < col;j++) {
                scanf("%d",&arr[i][j]);
        }
    }

    printf("\n The Matrix is : \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n The matrix represented in tuple form :");
        for(i = 0;i < row;i++) {
            for(j = 0;j < col;j++) {
                if(arr[i][j] != 0) {
                    printf("(%d,%d,%d), ",i,j,arr[i][j]);
                }
            }
        }

    printf("\n \n The transform of the above matrix :");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            tarr[i][j]=arr[j][i];
        }
    }

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d  ", tarr[i][j]);
        } 
        printf("\n");

    }

    printf("\n The transform of  matrix represented in tuple form : \n"); 
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            if (tarr[i][j] != 0) {
                printf("(%d,%d,%d), ", i, j, tarr[i][j]);
            }
        }
    }
}
