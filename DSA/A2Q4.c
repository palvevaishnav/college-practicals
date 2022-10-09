
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[20];
    int age;
}emp;

emp e[20];

int readfile(emp e[20]){
    int i=0;
    FILE* fp;
    if((fp=fopen("employee.txt","r"))!=NULL){
        while(!feof(fp)){
            fscanf(fp,"%s%d",e[i].name,&e[i].age);
            i++;
        }
    }
    return i-1;
}

void merge(emp e[],int s,int m,int end){
    int n1=m-s+1;
    int n2=end-m;
    emp el[n1];
    emp er[n2];

    for(int i=0;i<n1;i++){
        strcpy(el[i].name,e[s+i].name);
        el[i].age=e[s+i].age;
    }
    for(int j=0;j<n2;j++){
        strcpy(er[j].name,e[m+1+j].name);
        er[j].age=e[m+1+j].age;
    }
    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(strcmp(el[i].name,er[j].name) < 0 ){
            strcpy(e[k].name,el[i].name);
            e[k].age=el[i].age;
            i++;
        }
        else{
            strcpy(e[k].name,er[j].name);
            e[k].age=er[j].age;
            j++;
        }
        k++;
    }

    while(i<n1){
        strcpy(e[k].name,el[i].name);
        e[k].age=el[i].age;
        i++;k++;
    }
    while(j<n2){
        strcpy(e[k].name,er[j].name);
        e[k].age=er[j].age;
        j++;k++;
    }
    return ;


}

void mergesort(emp e[],int s,int end){
    int m=(s+end)/2;
    if(s<end){
        mergesort(e,s,m);
        mergesort(e,m+1,end);

        merge(e,s,m,end);
    }

    return;


}

void writefile(emp e[],int n){
    int i=0;
    FILE* fp;
    if((fp=fopen("employeeonname.txt","w"))!=NULL){
        for(i=0;i<n;i++){
            fprintf(fp,"%s\t%d\n",e[i].name,e[i].age);
        }        
    }
}

void printstr(emp e[20],int n){
    for(int i=0;i<n;i++){
        printf("name=%s\tage=%d\n",e[i].name,e[i].age);
    }
}

int main(){
    int n;
    n=readfile(e);
    printf("\n\nBefore Sorting:\n\n");
    printstr(e,n);
    printf("\n\nAfter Sorting:\n\n");
    mergesort(e,0,n-1);
    printstr(e,n);

    
}
