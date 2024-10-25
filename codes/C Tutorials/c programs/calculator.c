#include<stdio.h>
void main(){
    int ip,a,b;
    printf("Functions: \n");//Printing options of calculator
    printf("1.Add \n2.Subtraction \n3.Multiplication \n4.Division \n5.Remainder\n6.Exit\n");
    do {
        printf("Enter function number: ");
        scanf("%d",&ip);
        if (ip==6)
            goto switch1;
        printf("Enter two values: ");
        scanf("%d",&a);
        scanf("%d",&b);
        switch1:
        switch (ip)
        {
        case 1:
        printf("Sum of %d and %d is : %d\n",a,b,a+b);
        break;
        case 2:
        printf("Subtraction of %d and %d is : %d\n",a,b,a-b);
        break;
        case 3:
        printf("Multiplication of %d and %d is : %d\n",a,b,a*b);
        break;
        case 4:
        printf("Division of %d and %d is : %d\n",a,b,a/b);
        break;
        case 5:
        printf("Remainder of division bewteen %d and %d is : %d\n",a,b,a%b);
        break;
        case 6:
        printf("Exiting calculator, good day!\n");
        break;
        default:
        printf("Please enter correct input\n");
        break;
        }
    }
    while (ip!=6);
}