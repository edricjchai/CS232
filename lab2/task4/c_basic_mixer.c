// ----------------------------------------------------------------------------
//
// -------------------------------- C Basic Mixer --------------------------------
//
// ----------------------------------------------------------------------------
//
//  Purpose : To study the effects of performing operations on 
//            mixed data types.
//
//  Author  : Paul Zoski
//  Date    : 4/3/99
//  Modified: reformatted, JL Popyack Jan. 2002, Jan. 2003.
//  Modified: rewritten by Jun Yuan-Murray, 2016, August.
// 
// ----------------------------------------------------------------------------

#include <stdio.h>

// ----------------------------------------------------------------------------
//
// ------------------------------- Main Program -------------------------------
//
// ----------------------------------------------------------------------------

void conditionmixer() {
	int i = 6;
	char ch = 'm';
	
	//0 = false, 1 = true
	printf("3==4 = %d\n", 3==4); //output: 0
	printf("3==3 = %d\n", 3==3); //output: 1
	printf("!0 = %d\n", !0); //output: 1, 0 is false then being negated making it true
	printf("!(-1) = %d\n", !(-1)); //output: 0, -1 is true then being negated making it false
	printf("!\"abc\" =%d\n", !"abc"); //output: 0
	printf("2.0f == 2.0 is %d\n", (2.0f == 2.0)); //output: 1, 2.0 can be stored a binary
	printf("1.1f == 1.1 is %d\n", (1.1f == 1.1)); //output: 0, 1.1 cannot be stored in binary

        printf("%d\n", ch < 'z' && ch > 'a'); //output: 1
	printf("%d\n", !(ch-'z')?1:0); //output: 0
	printf("%d\n", 2 * 3 == 6 || (i = i + 1)); //output: 1, second operand is not evaluated
        printf("%d\n", i);
	printf("%d\n", 2 * 3 == 6 && (i = i + 1)); //output: 0
        printf("%d\n", i);
}

void typemixer() {
	int   i=1, j=10, k=20 ;					
	char  a='a', B='B', dollarSign='$';
	float x=2.2, y=4.2/5.1, z=1.116e-5;
		
	// ---------------------------------------------------------------------
	// The variables were already assigned values.  Let's check them out.
	// ---------------------------------------------------------------------
	printf ("i = %d \tj=%d \t\t k=%d\n", i, j, k);	//prints assigned integer i,j,k	
	printf ("a = %c \tB=%c \t\t dollarSign=%c\n", a, B, dollarSign); //prints assigned chars a,b, dollarSign	
        printf ("x = %f \ty=%f \t\t z=%e\n", x, y, z);		//prints assigned floats x, y, z
	// ---------------------------------------------------------------------		
	// And now the fun stuff ....
	// ---------------------------------------------------------------------
		
	// ---------------------------------------------------------------------
	// an integer plus a character

	printf("a+j=%d\n", a+j); //prints a+j=107
	// ---------------------------------------------------------------------
	// a character plus an integer
		
        printf("k+B=%d\n", k+B); //prints k+B=86
	// ---------------------------------------------------------------------
	// mixing floats and characters
		
	printf("x/dollarSign = %f\n", x/dollarSign); //prints x/dollarSign = 0.061111
	// ---------------------------------------------------------------------
	// we can declare new objects at any time!
		
	char newChar;
	newChar = a+j;
			
	// ---------------------------------------------------------------------
	// huh? What's going on here?
		
	printf("a+j=%c\n", newChar); //prints a+j=k
	printf("B-6=%d\n", B-6); //prints B-6=60

}
int main( void )
{
	typemixer();
        conditionmixer();
	return 0;
}
