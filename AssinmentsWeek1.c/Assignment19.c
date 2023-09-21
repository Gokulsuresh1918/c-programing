#include <stdio.h>

int main()
{
int income,tax;
printf("enter anual income = ");
scanf("%d",&income);
if (income>5000000)
{
	printf("invalid");
}
else if(income>=1000000)
{
	tax=income*30/100;
	printf("income tax amount = %d",tax);
}
else if(income>=500000)
{
	tax=income*20/100;
	printf("income tax amount = %d",tax);
}
else if(income>=250000)
{
	tax=income*5/100;
	printf("income tax amount = %d",tax);
}
else
printf("No tax");
return 0;
}