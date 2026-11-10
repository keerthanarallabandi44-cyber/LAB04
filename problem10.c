#include <stdio.h>
#include <string.h>

int main(){
    char string[200];
    printf("enter the string: ");
    fgets(string,200,stdin);
    string[strcspn(string,"\n")]='\0';

    int n= strlen(string),i;

    printf("ASCII values of the string:\n");
    for(i=0;i<n;i++)
        printf("'%d', ",(unsigned char)string[i]);
        printf("\n");

        return 0;

}