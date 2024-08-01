#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
srand(time(0));
int rand_number = rand() % 101;
int answer, tries = 10;
int correct = 0;

printf("Welcome to the ultimate challenge for testing your luck!!\n");
printf("Guess a number between 0 and 100 that I've chosen. You have %d tries\n", tries);

while (!correct && tries > 0)
{
printf("Your guess: ");
if (scanf("%d", &answer) == 1)
{
if (answer < rand_number)
{
tries--;
printf("Oops! You guess is smaller, try again (%d tries left). ", tries);
}
else if (answer > rand_number)
{
tries--;
printf("Nope! too big, try again (%d tries left). ", tries);
}
else
{
printf("Legend! That's correct. What were the chances huh?\n");
correct = 1;
}
}
else
{
while (getchar() != '\n');
printf("Invalid input. Enter a whole number between 0 and 100\n");
}
}

if (!correct)
{
printf("\nSorry out of tries. Try again\n");
return(0);
}
}
