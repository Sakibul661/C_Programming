#include <stdio.h>
#include <math.h> // Name: Md. Sakibul Islam . Roll: 25010101

int main()
{
    int arr[1] = {153};
    int num = arr[0];
    int original = num, sum = 0, digits = 0;

    // Count number of digits
    for (int temp = num; temp != 0; temp /= 10)
    {
        digits++;
    }
    // Calculate sum
    for (int temp = num; temp != 0; temp /= 10)
    {
        int remainder = temp % 10;
        sum += (pow(remainder, digits) + 0.5); // Here I add 0.5 cause <math.h> always return a double value
    }
    // Check if Armstrong
    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
