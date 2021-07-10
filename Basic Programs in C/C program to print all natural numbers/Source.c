

        

/* 
* Q  : Write a C program to print all natural numbers 
from 1 to n. - using while Loop
*/
//Solution
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	//to get data from end user
	printf("Enter the value of n : ");
	scanf("%d",&n);
    
	i=1; //initial loop varible 

// to iterate initial value to end value

	while(i<=n)
  {
     printf("%d\n",i);
     i++;
  }
   getch();
    }
