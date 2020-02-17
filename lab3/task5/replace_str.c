/* Overwrites an inputted string with 232 is awesome! if there is room.
 * * Does nothing if there is not. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CS232(char* src) {
     unsigned srcLength = strlen(src);
     char replacement[16] = "232 is awesome!";
     if (srcLength >= 15) {
         for (int i = 0; i < 15; i++)
            src[i] = replacement[i];
     }
}

char * replace_string() {
    char * str = malloc(16*sizeof(char));
    for(int i = 0; i < 15; i++)
        str[i] = ' ';
    str[15] = '\0';
    CS232(str);
    return str;
}

int main(int argc, char ** argv) {
    char * ret = replace_string();
    printf("replaced string = %s\n", ret);
    free(ret);
    return 0;
}
