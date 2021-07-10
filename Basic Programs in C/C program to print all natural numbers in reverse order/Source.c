/* 
* Q : Write a C program to print all natural numbers 
in reverse (from n to 1). -Using while loop
*/

//Solution

#include<stdio.h>
#include<conio.h>
void main()
{
       int n;//to get data from end user
	   printf("Enter the value of n : ");
	   scanf("%d",&n);

	// to iterate n value to end value 1
     
  while(n>=1)
    {
     printf("%d\n",n);
     n--;
   }
getch();
  }
