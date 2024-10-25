#include <stdio.h>
void addition(){
    int matrix1[2][2],matrix2[2][2],answer[2][2];
    printf("\nEnter 1st 2x2 matrice for addition : ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nenter [%d][%d] element :",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nEnter 2nd 2x2 matrice :");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nenter [%d][%d] element :",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\nSum of both matrices is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            answer[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\t",answer[i][j]);
        }
        printf("\n");
    }
}
//CODE FOR SYMMETRIC MATRIX
void main(){
    int matrix1[2][2],answer=0;
    printf("\nEnter 2x2 matrice to check for symmetric matrice: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nenter [%d][%d] element :",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if (matrix1[i][j]==matrix1[j][i]){
                answer=1;
            }
            else
            answer=0;
        }

    }
    if (answer==1)
    printf("\nThe matrice is symmetric.");
    else
    printf("\nMatrice is not symmetric.");
}