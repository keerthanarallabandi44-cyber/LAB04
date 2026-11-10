#include <stdio.h>
#include <string.h>

int main(){
    int n,i;
    printf("number of names: ");
    scanf("%d",&n);
    getchar();

    char names[n][50];

    for(i=0;i<n;i++){
        printf("%d)",i+1);
         fgets(names[i],50,stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

    }
    int j;
    char temp[50];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
        if((strcmp(names[j],names[j+1]))>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
        }

    }

    }

    printf("after arranging in alphabetical order:\n");
    for (i=0;i<n;i++) 
        printf("%s\n", names[i]);
        return 0;
}