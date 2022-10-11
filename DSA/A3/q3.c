#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char par[30];
int top=-1;

void push(char arg){
    top++;
    par[top]=arg;
    return;
}

char pop(){
    char r;
    r=par[top];
    top--;
    return r;
}

int main(){

    char str[40];
    int len;
    int count1=0,count2=0;
    printf("Enter the parenthesised string:\n");
    scanf("%s",str);
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=="(" || str[i]==")" || str[i]=="{" || str[i]=="}" || str[i]=="[" || str[i]=="]"){
            push(str[i]);
            count2++;
        }

    }
    for(int i=0;i<count2;i++){
        if(str[i]==pop()){
            count1++;
        }
    }
    if(count1==count2){
        printf("Balanced");
        return 0;
    }

    printf("Not Balanced");
    return 0;
}

