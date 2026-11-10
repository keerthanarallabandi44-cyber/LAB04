#include <stdio.h>
#include <string.h>

int main(){
    char string[200];
    printf("Enter the string: ");
    fgets(string,200,stdin);
    string[strcspn(string,"\n")]='\0';

int n= strlen(string),i,is_palindrom=1;

for(i=0;i<n;i++){
    if(string[i]!= string[n-i-1]){
    is_palindrom=0;
    break;}
        else
        is_palindrom = 1;

}

if (is_palindrom==0)
printf("\"%s\" is not a palindrome",string);

else if (is_palindrom==1)
printf("\"%s\" is a palindrome",string);

return 0;

}