
/* 
* Q  : Write a C program to print all even numbers 
between 1 to 100. - usingWhile loop
*/
 
//Solution

#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 ; //looping variable
	//intial value to end value

	while(i<=100)
 {
	   if(i%2==0)
	   {
		   	printf("%d ",i);
	   }
        i++;
	}
getch();
}


