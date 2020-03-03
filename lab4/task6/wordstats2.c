#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
      int len;
      char buf[MAX_BUF];
      int ch, n = 0;
      while((ch = getchar()) != EOF) {
        buf[n] = ch;
        ++n;
      }
      len = strlen(buf);

      int chara = 0, word = 0, line = 0, space = 0, upperc = 0, lowerc = 0, nums = 0;
      for(int i = 0; i < len; i++){
        if((buf[i] >= 'A' && buf[i] < 'Z') || (buf[i] >= 'a' && buf[i] < 'z')){
            chara++;
        }
        if(buf[i] >= 'A' && buf[i] <= 'Z'){
            upperc++;
        }
        if(buf[i] >= 'a' && buf[i] <= 'z'){
            lowerc++;
        }
        if(buf[i] == 32){
            space++;
        }
        if(buf[i] == 10){
            line++;
        }
        word = space + line;
        if(isdigit(buf[i])){
            nums++;
        }
      }

      printf("%d %d %d %d %d %d %d\n", chara, word, line, space, upperc, lowerc, nums);
}
