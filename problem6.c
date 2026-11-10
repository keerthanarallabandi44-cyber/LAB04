#include <stdio.h>
int main(){
    char string[200];
    int chars=0,words=1,in_word=0,i;
    printf("Enter the string: ");
    fgets(string,200,stdin);

    for(i=0;string[i]!='\n';i++){
        chars++;
        if(string[i]==' ')
        in_word = 1;
        else
        in_word=0;
        if(in_word==1)
        words++;
    }

    printf("total characters: %d\n", chars);
    printf("total words: %d\n", words);

    return 0;

 
}