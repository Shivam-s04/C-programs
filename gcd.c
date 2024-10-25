#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int gcd(int a, int b);

void main(){
    int a,b;
    scanf(" %d %d" , &a,&b);
    printf("GCD is %d" ,gcd(a,b));
}

int gcd(int a, int b){
    printf("calling %d, %d\n", a,b);
    if(b==0) return a;
    else return gcd(b,a%b);
}
