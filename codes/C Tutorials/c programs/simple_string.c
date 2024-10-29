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
int length_Using_Pointer(char* string);
void stringCopy(char in[],char out[]);
void stringConcatenate(char *str,char *dest);
void CountVowelsAndConsonants(char *str,int vow , int con);
void freq_Using_Pointer( char* str);


void main(){
    
    char dest[] = "Hello World!";
    freq_Using_Pointer(dest);

    // char string[length_without_strlen(str)];
    // stringCopy(str,string);
    // printf("%s",string);
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

void stringCopy(char in[],char out[]){
    int i = 0;
    while(in[i]!='\0'){
        out[i] = in[i];
        i++;
    }
    out[i] = '\0';
}

void stringConcatenate(char* str,char* dest){
    char * d = dest;
    char * s = str;
    while(*d) d++;
    while(*s){
        *d++ = *s++;
    }
    *d = '\0';
}
void CountVowelsAndConsonants(char *str,int vow , int con){
    char * s = str;
    while (*s)
    {
        if(*s>= 'A' && *s<='Z' || *s>= 'a' && *s<='z'){
        if(*s == 'a' || *s == 'e'|| *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' ||*s == 'E'||*s == 'I'||*s == 'O'||*s == 'U')
        vow++;
        else con++;
        
        }s++;
    }
    
}

void freq_Using_Pointer( char* str){
    int freq[256] = {0};

    while(*str){
        freq[(unsigned char)*str]++;
        str++;
    }
    
    for(int i='A';i<'Z';i++){
        if(freq[i]!=0)
        printf("%c-%d ",i, freq[i]);
    }

    for(int i='a';i<'z';i++){
        if(freq[i]!=0)
        printf("%c-%d ",i, freq[i]);
    }

}