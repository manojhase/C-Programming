
/*
* Q : Write a C program to find sum of all natural numbers between 1 to n.
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
	
	i=1;  //initial loop varible 
	
	// to iterate initial value to end value 
	
	while(i<=n)
	{
		sum=sum+i;//add each value of i in sum 
		i++;
	}
	printf("Sum of all natural from 1 to n %d",sum);//sum of all numbers
    getch();
}
