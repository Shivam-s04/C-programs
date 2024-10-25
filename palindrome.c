#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void palindrome(char str[]);
int palindromeUsingRecursion(char string[],int left, int right);

void main(){
    char string[30];
    scanf("%s",string);
    printf("\n %d ",palindromeUsingRecursion(string,0,strlen(string)-1));
}

void palindrome(char str[]){
    int left = 0;
    int right = strlen(str)-1;
    bool pal = true;
    while(left<right){
        if(str[right--] != str[left++]){
            pal = false;
            break;
        }
        // right--;
        // left++;
    }
    if (pal == true)
    printf("is Palindrome");
    else
    printf("not Palindrome");
}

int palindromeUsingRecursion(char string[],int left, int right){
    if (left>=right) return 1; 
    if (string[left] != string[right]) return 0;
    return palindromeUsingRecursion(string,left+1,right-1);

}