#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
srand(time(0));
int rand_number = rand() % 100 + 1;
int answer, tries = 10;
int correct = 0;

printf("Welcome to the ultimate challenge for testing your luck!!\n");
printf("Guess a number between 0 and 100 that I've chosen. You have %d tries\n", tries);
printf("First try: ");
scanf("%d", &answer);

while (!correct && tries > 0)
{
if (isdigit(answer))
{
if (answer < rand_number)
{
tries--;
printf("Oops! You guess is smaller, try again (%d tries left): ", tries);
scanf("%d", &answer);
}
else if (answer > rand_number)
{
tries--;
printf("Nope! too big, try again (%d tries left): ", tries);
scanf("%d", &answer);
}
else
{
printf("Legend! That's correct. What were the chances huh?\n");
return (0);
correct = 1;
}
}
else
{
printf("Enter a whole number between 0 and 100\n");
return(-1);
}
}

printf("Sorry out of tries. Try again\n");
return(-1);
}
