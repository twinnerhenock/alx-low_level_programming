#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i=0;

        if (i>0)
		printf("%d is positive\n",i);
	else if (i<0)
		printf("%d is negative\n",i);
	else
		printf("%d is zero\n",i);
        return (0);
}
