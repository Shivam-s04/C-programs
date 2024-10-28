// learning ascii
#include <stdio.h>

void printASCII();
void main(){
    char a = '0';
    char b = '1';
    // printf("%d ",a+b);
    // printf("%c",a+b);
     printASCII();
}

void printASCII(){
    for(int i = 32; i< 123 ; i++){
        printf("%c ",i);
    }
}