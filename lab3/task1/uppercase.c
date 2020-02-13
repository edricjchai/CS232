#include <stdio.h>
#include <string.h>

void uppercase(char *uc){
    *uc = *uc - 'a' + 'A';
}
int main(int argc, char *argv[]) {

    char str[100];

    printf("Enter a string\n");
    scanf("%99s", str);

    for(int i = 0; i < strlen(str); i++){
        if((str[i] >= 'a') && (str[i] <= 'z'))
            uppercase(&str[i]);
    }
    printf("%s\n", str);
    return 0;
}

