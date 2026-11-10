#include <stdio.h>
int main(){
    char string[200];
    int lower=0,upper=0,digits=0,special=0,i;
    printf("Enter the string: ");
    fgets(string,200,stdin);

    for(i=0;string[i]!='\n';i++){
        if(string[i]>='a' && string[i] <='z')
        lower++;

         else if(string[i]>='0' && string[i] <='9')
        digits++;

         else if(string[i]>='A' && string[i] <='Z')
        upper++;

         else 
         special++;
    }
    printf("lower count: %d\nupper count: %d\ndigits count: %d\nspecial count: %d\n",lower,upper,digits,special);
    return 0;

}