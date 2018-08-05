#include<stdio.h>
#include<conio.h>

void main()
{
	printf("\t\t\t\tCalculator\n\n\n");
	int num1, num2, result,operator,bunty,anil;
	anil = 0;
	printf("Please enter the first number to be operated  :-	");
	scanf_s("%d", &num1);
	printf("\n\nEnter the second number to be operated	      :-        ");
	scanf_s("%d", &num2);

	printf("\n\n\t\tOperator's directory:-\n\n 1. To add			     :-  input 1\n 2. To subtract			     :-  input 2\n 3. To multiply			     :-  input 3\n 4. To divide / To know reaminder    :-  input 4\n\n\n ");
	scanf_s("%d", &operator);

	if (operator==1)
	{
		result = num1 + num2;
		anil = 1;
	}
	else {
		if (operator==2) {
			result = num1 - num2;
			anil = 1;
		}
		else {
			if (operator==3)
			{
				result = num1 * num2;
				anil = 1;
			}
			else {
				if (operator==4)
				{
					printf("\n To know the remainder press 5 or to know quotient press 6\n\n ");
					scanf_s("%d", &bunty);
					if(bunty==5)
					{
						result = num1 % num2;
						anil = 1;
					}
					else {
						if (bunty == 6)
						{
							result = num1 / num2;
							anil = 1;
						}
						else {
							printf("Invalid Command");
						}
					}
				}
				else {
					printf("Invalid command");
				}
			}
		}
	}
	if (anil == 1)
	{
		printf("\n\n\n\t\t\tThe result is  = %d", result);
	}
	_getch();
}