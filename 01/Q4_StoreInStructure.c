#include <stdio.h>


int main() {
    int i,n;
    printf("Enter the number of strings:");
    scanf("%d",&n);
    struct strings {
      char stringname[50];
    } s[n];
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < n; ++i) {
        printf("Enter The String: ");
        scanf("%s", s[i].stringname);
        
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < n; ++i){
        printf("The strings are : ");
        puts(s[i].stringname);
    }
    return 0;
}
