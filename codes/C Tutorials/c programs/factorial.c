#include<stdio.h>
int factorialUsingIteration(int num);
int factorialUsingRecursion(int num){
    // int sum;
    // if (n==1)
    // return 1;
    // else {
    //     sum=n*factorial(n-1);
    // return sum;
    if (num==1)
        return 1;
    else
        return (num*factorialUsingRecursion(num-1));
}

int main(){
    int fact = factorialUsingIteration (5);
    printf("%d\n",fact);
    printf("%d",factorialUsingRecursion(5));
}

int factorialUsingIteration(int num){
    int fact = 1;
    for(int i = 1; i<=num ; i++)
        fact*=i;
    return fact;
}