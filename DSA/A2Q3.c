#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct emp{
    char name[20][20];
    int age;
}e[20];


int main(){
    FILE *fp;
    int i=0;
    // E e[20];
    fp=fopen("employee.txt","r");
    if(fp==NULL){
        printf("No Data found");
        return 0;
    }
    else{
        while(!feof(fp)){
            fscanf(fp,"%s%d",e[i].name,&e[i].age);
            i++;
        }
    }
    
    for(int j=0;j<i;j++){
        fprintf("%d",e[i].age);
    }
}
