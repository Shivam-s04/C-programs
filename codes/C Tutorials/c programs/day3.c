#include <stdio.h>

//func declaration
void checkEven(int N);
void pointerSwap(int* a, int* b);
void main(){
    // int n ;
    // n = 429496729;
    // printf("%d",n);
    // n+=1;
    // printf("%d",n);
    // int x = 8;
    // x = x >> 2;
    // printf("%d ",x);
    // x = x << 1;
    // printf("%d",x);
    //  checkEven(11);
     int a= 10, b = 5;
     pointerSwap(&a, &b);
     printf("%d %d", a,b);

}


// fuc define
void checkEven(int N){
    (N & 1)?printf("Odd"):printf("Even");
}

void pointerSwap(int* a, int* b){
    int temp = *a;
    *a= *b;
    *b = temp;
    
}
