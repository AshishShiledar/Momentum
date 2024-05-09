#include<stdio.h>
#include<conio.h>
void main ()
{
int a;
printf("enter value a:");
scanf("%d",&a);
if(a==0)
{
	printf("value is zero ");
}
else if (a>0)
{
printf("\n positive");	
}
else
{
printf("\n negative");	
}
getch();	
}