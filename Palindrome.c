#include <stdio.h>

int main() // Name: Md.Sakibul Islam   Roll: 25010101
{
    int arr[5] = {2,3,3,2};
    int num = arr[0];
    int reversed = 0, original = num, remainder;

    while (num > 0)
    {
        remainder = num % 10;                 // get the last digit.
        reversed = reversed * 10 + remainder; // add the last digit to reverse number.
        num /= 10;                            // remove the last digit.
    }

    if (original == reversed)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
