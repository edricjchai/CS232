#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
      int letter_frequency[26] = {0};
      int len, i;
      char buf[MAX_BUF];

      fgets(buf,MAX_BUF,stdin);
      len = strlen(buf);

      do{
            if (buf[len] >= 'A' && buf[len] <= 'Z')
                letter_frequency[buf[len]-'A']++;
            else if(buf[len] >= 'a' && buf[len] <= 'z')
                letter_frequency[buf[len]-'a']++;
            len--;
      } while (len >= 0);

      printf("Distribution of letters in corpus:\n");
      for (i = 0; i < 26; i++) {
        // 'A' is ASCII code 65
        printf("%c: %d\n", 65+i, letter_frequency[i]);
      }
}
