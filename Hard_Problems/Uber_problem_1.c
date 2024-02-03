
/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

*/

#include "stdio.h"

int main()
{
    int vector[30], result[30], vectorsize;

    printf("How many numbers do you want to put in the vector?");
    scanf("%d", &vectorsize);

    for (int i = 0; i < vectorsize; i++)
    {
        result[i] = 1;
    }

    for (int i = 0; i < vectorsize; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < vectorsize; i++)
    {
        for (int j = 0; j < vectorsize; j++)
        {
                if(j == i) //it means they are in the same position
                {
                    continue;
                }
                else
                {
                    result[i] *= vector[j];
                }
        }
    }

    for (int i = 0; i < vectorsize; i++)
    {
        printf("Result: %.d\n", result[i]);
    }
    return 0;
}
