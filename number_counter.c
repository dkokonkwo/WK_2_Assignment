#include <stdio.h>
#define MAX 10000000 // MAX checker value

/**
 * main - find num of digits in a number
 * Return - 0 Always
 */

int main() 
{
int ran_num;
int checker = 100;
int num_digit = 2;
char *odd_even[1];

printf("Enter a number comprising of 2 to 7 digits: ");
scanf("%d", &ran_num);

while (checker <= MAX && ran_num > 9)
{
if (num_digit % 2 == 1)
{
odd_even[0] = "odd";
}
else if (num_digit % 2 == 0)
{
odd_even[0] = "even";
}
if (ran_num / checker == 0)
{
printf("%d has %d digits which is %s\n", ran_num, num_digit, *odd_even);
return (0);
}
num_digit++;
checker *= 10;
}

printf("Number is outside the 2 to 7 digit range\n");
return (0);
}
