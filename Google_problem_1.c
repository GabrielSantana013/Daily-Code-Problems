#include "stdio.h"

/*
Good morning! Here's your coding interview problem for today.

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/

int main()
{

    int inputNumbers[4], k, sum = 0;

    for (int i = 1; i < 5; i++)
    {
        printf("Enter the number nº%d: \n", i);
        scanf("%d", &inputNumbers[i - 1]);
    }

    printf("Now, enter the K number: ");
    scanf("%d", &k);

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++) //i+1 to avoid comparing an element with itself.
        {
            printf("I:%d  J:%d\n", i, j);
            sum = inputNumbers[i] + inputNumbers[j];
            if (sum == k)
            {
                return 0;
            }
        }
    }

    return 0;
}