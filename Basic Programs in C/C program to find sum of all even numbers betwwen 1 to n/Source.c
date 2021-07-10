
/* 
* Q  : Write a C program to find sum of all even
numbers between 1 to n.
*/
//Solution

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	//to get data from end user
	printf("Enter the value of n : ");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
	  if(i%2==0)
		{
			sum=sum+i;//add each value of i in sum
		}//enf of if
		 
	}//end of for
	printf("Sum of all even numbers is %d\n",sum); //sum of all number
	getch();
}
