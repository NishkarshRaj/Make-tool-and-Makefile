#include<stdio.h>
#include "mymath.h"

int main() {
	int a, b,flag=0,ch;
	char ch1;
	printf("Four function Calculator");
	do
	{
	printf("\n\nOption Menu:\n");
	printf("1. Addition");
	printf("2. Subtraction");
	printf("3. Multiplication");
	printf("4. Division");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	switch(ch)
	{
		case 1: printf("Addition: %d",add(a,b));
		break;
		case 2: printf("Subtraction: %d",subtract(a,b));
		break;
		case 3: printf("Multiplication: %d",multiply(a,b));
		break;
		case 4: printf("Division: %d",divide(a,b));
		break;
		default: printf("Entered case value has no supported operation!");
	}
	printf("Enter y/Y to continue: ");
	scanf("%c",&ch1);
	if((ch1!='y')||(ch1!='Y'))
	{
		flag = 1;
	}
	}while(flag==0);
	return 0;
}
