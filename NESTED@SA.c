#include<stdio.h>
#include<conio.h>
void main()
{
int no;	
printf("enter no:");
scanf("%d",&no);
if (no>0)
{
if (no%2==0)
{
printf("even");	
}
else 
{
printf("odd");	
}
}
else	
{
printf("-ve number");	
	}		
getch();	
}



