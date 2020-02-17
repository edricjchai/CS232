/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */

#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int compare(char * first, char * second){
    unsigned first_length = strlen(first);
    unsigned second_length = strlen(second);
    for(unsigned i = 0; i < MIN(first_length,second_length); i++){
        if(first[i] != second[i])
            return first[i] - second[i];
    }
}
void swap(char* first, char* second){
    for(int i = 0;i < LEN;i++){
        char temp = first[i];
        first[i] = second[i];
        second[i] = temp;
    }
}
int main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

    for(int i = 0; i < NUM; i++)
        fgets(Strings[i],LEN,stdin);
  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */

  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */
    for(int i = 0; i < NUM; i++)
        printf("%s\n", Strings[i]);
  /* Bubble sort */
  for(int i = 1; i <= NUM; i++){
    for(int j = 0; j < NUM - i; j++){
    char * current = Strings[j];
    char * next = Strings[j+1];
	  if(compare(current,next) > 0)
        swap(current, next);
    }
  }
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) The swap of two strings must be done by copying them
            (using a temp variable of your choice) one character at a time,
            without using any C string library functions.
            That is, write your own while/for loop to do this.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */



  /* Output sorted list */

  puts("\nIn alphabetical order, the strings are:");
    for(int i = 0; i < NUM; i++)
        printf("%s\n", Strings[i]);
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

}
