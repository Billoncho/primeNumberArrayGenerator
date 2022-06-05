/*
Author: Billy Ridgeway
Purpose: Generate prime numbers from 3 to 100 and assign them to elements of an array.
Date: 27 May 2022
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num, checkNum;
    int prime[100] = {[0]=1, [1]=2}; // Declare an array of 100 elements and initialize the first two elements to 1 and 2 and the rest to 0.
    int elementInsert = 2;

    for(num = 3; num <= 100; num++) // Outter loop loops from 3 to 100.
    {
        for(checkNum = 3; checkNum <= num; checkNum++) // Checks to see if the counter is less than or equal to the counter.
        {
            if(num%checkNum == 0) // Checks to see if the number is even and breaks out of the loop if it is.
            {
                break;
            }
        }
        if(num == checkNum) // Checks to see if the modulus division has reached the same number as the integer number without having a remainder of zero.
        {
            prime[elementInsert] = num; // Inserts the number in the next element of the array.
            elementInsert++;            // Increments the counter for the next element of the array.
        }
    }

    for(int x = 0; x < 100; x++) // Loops throgh the array and prints the prime numbers to the screen. Also, checks to see if the elements values is zero and then doesn't print it to the screen.
    {
        if(prime[x] != 0 && num/(prime[x] >= prime[x])){    // Checks to ensure that we haven't gone greater than the square root of the number.
        printf("%d ", prime[x]);
        }
    }

    return 0;

}
