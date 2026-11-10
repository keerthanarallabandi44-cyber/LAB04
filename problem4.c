#include <stdio.h>

int main(){
    char string[200];
    int i;
    printf("Enter the string: ");
    fgets(string,200,stdin);

    for(i=0;string[i]!='\n';i++){
        if(string[i]>='a'&& string[i]<='z')
        string[i]=string[i]-32;
    }

    printf("after converting to upper case: %s\n",string);
    return 0;
}