#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char pld[50];
int top=-1;

void  push(char n){
    top++;
    pld[top]=n;
    return;
}

char pop(){
    char s;
    s=pld[top];
    top--;
    return s;
}


int main(){
    char str[40];
    printf("Enter the string:");
    scanf("%s",str);
    int count =0;
    int len=strlen(str);
    // pld=(char *)malloc(sizeof(char) *strlen(str));
    for(int i=0;i<len;i++){
        push(str[i]);
    }

    for(int i=0;i<len;i++){
        if(str[i]==pop()){
            count++;
        }
    }
    if(count==len){
        printf("Palindrome");
        return 0;
    }

    printf("Not Palindrome");
    return 0;

}
