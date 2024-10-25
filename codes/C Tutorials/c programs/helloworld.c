#include<stdio.h>
#include<stdbool.h>
void table(int N);
void pattern(int N);
int sumOfDigits(int N);
void fibonacci(int N);
void fibonacciUsingRecursion(int a,int b,int N);
void arrayPointer(int arr[]);
bool primeCheck(int N);
//main function
int main(){
    // int a;
    // table(14);
    // pattern(5);
    // printf("%d",sumOfDigits(415));
    // fibonacciUsingRecursion(0,1,5);
    // int arr[5] = {1,2,3,4,5};
    // arrayPointer(arr);
    
    printf("%d", primeCheck(29));
}

void table(int N){
    for(int i=1 ; i<=10 ; i++)
        printf("%d\n",i*N);
}

void pattern(int N){
    for (int i = 1; i<=N ; i++){
        for (int j = 1; j<=i ; j++){
                printf("%d ",j);
        }
        printf("\n");
    }
        
}

int sumOfDigits(int N){
    if (N==0)
        return 0;
    else
        return ((N%10)+sumOfDigits(N/10));
    
    
}

void fibonacci(int N){
    int a=0,b=1;
    while(N!=0){
        printf("%d ",a);
        int temp = a+b;
        a=b;
        b=temp;
        N-=1;
    }
}

void fibonacciUsingRecursion(int a,int b,int N){
    if (N==0)
        return;
    else
        printf("%d ",a);
    return fibonacciUsingRecursion(b,a+b,N-1);
}

void arrayPointer(int arr[]){
        for(int i= 0 ; i< sizeof(arr[0]*5)/sizeof(arr[0]); i++ ){
        arr[i] +=1 ;
        printf("%d ", arr[i] );
    }
}

bool primeCheck(int N){
    if (N<=1)
    return false;
    for(int i=2; i*i<N; i++)
        if(N%i==0) return false;
    return true;
}