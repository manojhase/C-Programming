/* 
* Q  : Write a C program to print multiplication table of any number
*/
//Solution


#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,mult;
	//to get data from end user
	printf("Enter the value of which table n ");
	scanf("%d",&n);

	//i for intilize value upto 10
	printf("multiplication table of  %d\n",n);
	i=1;
	while(i<=10)
	{
	  mult=n*i; //multiplication
      printf(" %d * %d = %d \n",n,i,mult);
 	   i++;
	}
getch();
}

