#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,choice,ans;
printf("\n enter no 1:");
scanf("%d",&no1);
printf("\n enter no 2:");
scanf("%d",&no2);	
printf("\n enter your choice");
printf("\n1 for addition");
printf("\n2 for substriction");
printf("\n3 for multiplication");
printf("\n4 for division");
printf("%d", &choice);
switch(choice)
{
case 1:
{
ans=no1+no2;
printf("%d",ans);
break;	
}
case 2:
{
ans=no1-no2;
printf("%d",ans);
break;	
}
case 3:
{
ans=no1*no2;
printf("%d",ans);
break;	
	}
case 4:
{
ans=no1/no2;
printf("%d",ans);
break;	
	}			
default:
{
printf("\n invalid choice");	
	}
getch();
}
}


