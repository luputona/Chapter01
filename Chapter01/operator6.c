#include<stdio.h>


void main10()
{
	int num1;
	int num2;
	int result1;
	int result2;
	int result3;

	num1 = 10;
	num2 = 12;
	result1 = (num1 == 10 && num2 ==12);
	result2 = (num1 < 12 || num2 >12);
	result3 = (!num1);

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);

	


}