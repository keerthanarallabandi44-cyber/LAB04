#include <stdio.h>
#include <string.h>

int main(){
    char string[200];
    int i, count = 0;

    printf("enter the string: ");
    fgets(string, 200, stdin);
    string[strcspn(string, "\n")] = '\0';

    for(i = 0; string[i] != '\0'; i++){
        char c = string[i];
        if(c == 'a' || c == 'e'|| c == 'i' || c == 'o'|| c == 'u' ||
           c == 'A'|| c == 'E'|| c == 'I' || c == 'O' || c == 'U'){
            count++;}
}

    printf("number of vowels in \"%s\" is: %d\n", string, count);

    return 0;
}