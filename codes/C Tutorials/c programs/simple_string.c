#include<stdio.h>
#include<string.h>
#include<ctype.h>
void most_frequency(){
    char str[50],a;
    printf("Enter a word: ");
    scanf("%s",&str);
    // finding most frequent character
    int len=strlen(str),count=0,j=0,maxcount=0;
    for (int i=0;i<len;i++){
       int count=0;  // reset the count for each letter, most imp!!!!!!
        for(j=0;j<len;j++){
            if(str[i]==str[j])
            count++;
            }
            if(count>maxcount){
            a=str[i];
            maxcount=count;
            }
    }
    printf("Most frequent character is %c ",a);
}

int length_without_strlen(char string[]);
int length_Using_Pointer( char* string);

void main(){
    char str[] = "Hello World ";
     char* string = str;
    printf("%d",length_Using_Pointer(string));
}

int length_without_strlen(char string[]){
    int i = 0,len = 0;
    while(string[i] != '\0'){
        len++;
        i++;
    }
    return len;
}
int length_Using_Pointer(char* string){
    char* s = string;
    while(*s) s++;
    return (s-string);
}