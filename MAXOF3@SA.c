#include<stdio.h>
#include<conio.h>
void main ()
{
int a;
int d;
int s;
printf("enter value a:");
scanf("%d",&a);
printf("enter value d:");
scanf("%d",&d);
printf("enter value s:");
scanf("%d",&s);
if(a>d)
{
	printf("\nA IS MAX ");
}
else if (d<s)
{
printf("\nD IS MAX");	
}
else (s>a);
{
printf("\nS IS MAX");	
}
getch();	
}