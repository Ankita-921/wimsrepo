#include <stdio.h>
int main() {
	int number1, number2, sum;

	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);

	//calculate the sum now
	sum = number1 + number2;

	printf("%d + %d = %d", number1, number2, sum);
	return 0;

}
<<<<<<< HEAD

int addfunc(int a , int b)
{
	int c = a+b;
	return c;
=======
//function added in branch1
int func_add(int a, int b)
{
	return a+b;
>>>>>>>branch1
}
