/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space.
In other words, find the lowest positive integer that does not exist in the array.
The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.
*/

#include "stdio.h"

int main()
{

    int integers[10], maxInts, positiveCounter;

    printf("How many integers do you want in array? (max 10): ");
    scanf("%d", &maxInts);

    // inputs
    for (int i = 0; i < maxInts; i++)
    {
        printf("Enter the %dº number: \n", i + 1);
        scanf("%d", &integers[i]);
        if (integers[i] > 0)
        {
            positiveCounter++;
        }
    }

    // vector organizer

    for (int i = 0; i < maxInts; i++)
    {
        for (int j = i + 1; j < maxInts; j++)
        {
            if (integers[j] < integers[i])
            {
                int tempInteger = integers[i];
                integers[i] = integers[j];
                integers[j] = tempInteger;
            }
        }
    }

    for (int i = 0; i < maxInts; i++)
    {

        if (integers[0] > 1 && positiveCounter == maxInts)
        {
            break;
        }
        else if (integers[0] <= 0 && i > 0)
        {
            integers[0]++;
            i--;
        }
        else if (integers[0] >= 0 && integers[0] == integers[i])
        {
            integers[0]++;
        }
    }

    if (positiveCounter == maxInts)
    {
        printf("\nYour number is 1");
    }
    else
    {
        printf("\nYour number is %d", integers[0]);
    }

    return 0;
}