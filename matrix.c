#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void matrix_add(int m1[][3],int m2[][3], int row, int col);
void matrix_mul(int m1[][3],int m2[][3],int m3[][3] , int row, int col);
void get_data(int *arr, int size);
void merging (int arr1[],int arr2[],int arr3[],int size,int size1,int size2);

void main(){

    int arr1[] = {1,2,14};
    int arr2[] = {8,9,10,11,12,13}; 
    
    
    int size1  = sizeof(arr1)/sizeof(arr1[0]);
    int size2  = sizeof(arr2)/sizeof(arr2[0]);
    int size  = size1 + size2;

    int res[size];
     merging (arr1,arr2,res,size,size1,size2);
     for(int i = 0; i<size; i++){
        printf("%d ",res[i]);
     }
     

    


    //dynamic memory allocation
    // int *arr  = (int*)malloc(size*sizeof(int));
    //  get_data( arr, size);
    // remember to free the memory
    
    //print
    // for(int i=0 ; i<size ; i++){
    //     printf("%d\t" , arr[i]);
    //     if(arr[i]%10 == 0)
    //     printf("\n");
    // }
}
    void merging (int arr1[],int arr2[],int res[],int size,int size1,int size2){
        int i=0,j=0,k=0;
        // int size1 = strlen(arr1);
        // int size2 = strlen(arr2); since in function they are pointers, strlen cant be used !!
        while(i<size1 && j<size2){
            if(arr1[i]<arr2[j]){
                res[k++] = arr1[i++];
            }
            else if(arr1[i]>arr2[j]){
                res[k++] = arr2[j++];
            }
            else{
                res[k++] = arr2[j++];
                res[k++] = arr1[i++];
            }
        
        }
        while(i<size1){
            res[k++] = arr1[i++];
        }
        while(j<size2){
            res[k++] = arr2[j++];
        }
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

