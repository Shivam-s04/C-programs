#include<stdio.h>
#include<string.h>
typedef struct {
    char name[20] ;
    int roll;
    float marks;
}students;
void printRecord(students arr[],int size){
    for(int i=0; i<size ; i++){
        printf("Roll No: %d \nName : %s \nMarks : %f\n",arr[i].roll,arr[i].name,arr[i].marks);
    }
}

void main(){
    int n;
    scanf("%d",&n);
    students arr[n];
    for(int i=0 ; i<n ; i++){
        printf("Enter name :\n ");
        scanf("%s",arr[i].name);
        printf("Enter roll no\n ");
        scanf("%d",&arr[i].roll);       
        printf("Enter marks:\n ");
        scanf("%f",&arr[i].marks);


    }   
    printRecord(arr,n);
}
