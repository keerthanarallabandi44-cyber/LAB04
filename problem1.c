#include <stdio.h>
#include <string.h>

int main(){
    char string1[200], string2[200],copy[200],rev[200];
    printf("enter the string: ");
    fgets(string1,sizeof(string1),stdin);
    string1[strcspn(string1,"\n")]='\0';

    printf("enter the second string: ");
    fgets(string2,sizeof(string2),stdin);
    string2[strcspn(string2,"\n")]='\0';

    printf("the copy of the string: %s\n",strcpy(copy,string1));

    int n= strlen(string1),i;
    for(i=0;i<n;i++)
    rev[i]=string1[n-i-1];
    rev[i]='\0';
    printf("reverse of the string is: %s\n",rev);


    printf("length of the string is: %d\n",strlen(string1));

    if(strcmp(string1,string2)==0)
    printf("first and second string are same\n");
    else
    printf("both strings are not same\n");

    return 0;

}