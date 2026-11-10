#include <stdio.h>
#include <string.h>

int main(){
    char string[200],temp;
    printf("Enter the string: ");
    fgets(string,200,stdin);
    string[strcspn(string,"\n")]='\0';

    int i,j,n=strlen(string);

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(string[j]>string[j+1]){
                temp=string[j];
                string[j]=string[j+1];
                string[j+1]=temp;
            }

        }
    }
    printf("After arranging in alphabetical order: %s\n",string);
    return 0;


}