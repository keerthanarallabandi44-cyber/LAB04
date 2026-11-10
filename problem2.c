#include <stdio.h>
#include <string.h>

int main(){
    char string[200],key;
    printf("enter the string: ");
    fgets(string,200,stdin);
    string[strcspn(string,"\n")]='\0';

    printf("enter the character you want to find: ");
    scanf("%c",&key);
    int i,is_true=0;
    for(i=0;string[i]!='\0';i++){
    if(string[i]==key){
        is_true=1;
        break;
    }}
    if(is_true==1)
    printf("%c is present in the given string \"%s\".\n",key,string);
        
    
    else
    printf("%c is not present in the given string \"%s\".\n",key,string);


        
    return 0;
}