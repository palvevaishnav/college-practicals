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
    int len,flag=0;
    int count1=0,count2=0;
    char ch;
    printf("Enter the parenthesised string:\n");
    scanf("%s",str);
    len=strlen(str);
    for(int i=0;i<len;i++){
        ch=str[i];
        if(str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]=='[' || str[i]==']'){
            push(str[i]);
            count2++;
        }

    }
    // printf("%d\n",count2);
    for(int i=0;i<count2;i++){
        if( par[i] =='(' &&  par[count2-i-1] !=')'){
            flag++;
        }
        if( par[i] =='{' &&  par[count2-i-1] !='}'){
            flag++;
        }
        if( par[i] =='[' && par[count2-i-1] !=']'){
            flag++;
        }
    }
    if(flag==0){
        printf("Balanced");
    }
    else{
        printf("Not Balanced");
    }    
    return 0;
}

