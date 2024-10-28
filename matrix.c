#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void matrix_add(int m1[][3],int m2[][3], int row, int col);
void matrix_mul(int m1[][3],int m2[][3],int m3[][3] , int row, int col);
void get_data(int *arr, int size);

void main(){

    //dynamic memory allocation
    int size ;
    scanf("%d",&size );
    int *arr  = (int*)malloc(size*sizeof(int));
     get_data( arr, size);
    
    //print
    for(int i=0 ; i<size ; i++){
        printf("%d " , arr[i]);
    }






    // prev code;
    // matrix_mul(m1,m2,m3,3,3);
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
            // printf("%d ", m3[i][j]);
    // //     }
    //     printf("\n");
    // }
}


void get_data(int *arr, int size){
    for(int i = 0 ; i<size ; i++){
        arr[i] = i+1;
    }
}

void matrix_add(int m[][3], int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m[i][j] += arr[i][j];
        }
    }
}

void matrix_mul(int m1[][3],int m2[][3],int m3[][3] , int row, int col){
    for(int i = 1 ; i<=row ; i++){
        for(int j = 1 ; j<=row ; j++){
            for(int k = 1 ; k<=row ; k++){
                m3[i][j] = (m1[i][k]*m2[k][j]);
                        
                }
            }
    }
}

