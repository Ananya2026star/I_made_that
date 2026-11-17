#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int secret_number = rand() % 100 +1;
    printf("%i\n", secret_number); // remove this before running if you want to avoid spoiling the secret number. I added this line to just check it
    
    int guess_number;
do
   {
        printf("What number do you think im thinking?:");
        scanf("%i", &guess_number);
        
    
    if (secret_number == guess_number)
    {
        printf("You got it!\n");
    }
    else if (guess_number > secret_number)
    {
        printf("Go lower!\n");
    }
    else 
    {
        printf("Go higher!\n");
    }
   }
     while (secret_number != guess_number);
}
