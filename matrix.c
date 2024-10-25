#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void matrix_add(int m1[][],int m2[][], int row, int col);


void main(){
    int m1[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int m2[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    matrix_add(m1,m2,3,3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
}

void matrix_add(int m[][3], int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m[i][j] += arr[i][j];
        }
    }
}