#include <stdio.h>
#include <string.h>

int main(){
    char string[200],key,lock;
    printf("Enter the string: ");
    fgets(string,200,stdin);
    string[strcspn(string,"\n")]='\0';

    printf("Enter the character you want to replace with: ");
    scanf("%c",&key);
    getchar();

    printf("Enter the character you want to replace: ");
    scanf("%c",&lock);
    getchar();

    int n= strlen(string),i,is_found=0;

    for(i=0;i<n;i++){
        if(string[i]==lock){
        is_found=1;
        break;}

    }
    if(is_found==0){
    printf("Giver character is not found in the string");
    return 0;}

    for(i=0;i<n;i++){
        if(string[i]==lock)
            string[i]=key;
        
    }

    printf("After replacing the string: \"%s\".",string);

return 0;
}