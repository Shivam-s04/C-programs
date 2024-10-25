#include<stdio.h>
int hcf(int number1,int number2){
    int n; int hcf;
    if (number1>=number2)
    n=number1;
    else
    n=number2;
    for (int i=0;i<n;i++){
        if((number1%i==0)&&(number2%i==0))
        hcf=i;
    }
    return hcf;
}
int lcm(int number1,int number2){
    int i=1,lcm;
    if((number1==0)||(number2==0))
    printf("0 is the lcm");
    else
    do
    {
       if ((i%number1==0)&&(i%number2==0))
       lcm=i;
       i+=1; 
    } while (lcm==0);
    return lcm;
}
int main(){
    int num1,num2,cm,cf;//common factor,common multiple
    printf("Enter the two numbers for finding LCM and HCF: ");
    scanf("%d%d",&num1,&num2);
    cf= hcf(num1,num2);
    cm= lcm(num1,num2);
    printf("%d is the hcf",cf);
    printf("%d is the lcm",cm);
    return 0;
}