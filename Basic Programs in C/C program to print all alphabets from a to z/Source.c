
/*  
* Q   : Write a C program to print all alphabets from a 
to z. - using while loop
*/

//Solution

#include<stdio.h>
#include<conio.h>
void main()
 {
	char c;
	c='a'; // looping varible
 
	// itration from a to z
  
	while(c<='z')
      {
		printf("%c ",c);
		c++;
		}
	getch();
 }

