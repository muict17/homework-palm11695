#include <stdio.h>
//Functions
int Find_N(int n)
{
    int count = 1;
    while (n > 9)
    {
        n /= 10;
        count++;
    }
    return count;
}
int powerByNongPalmEIEI(int n, int power)
{
    int total = 1;
    for (int i = 0; i < power; i++)
    {
        total *= n;
    }
    return total;
}
//Main Function
int main()
{
    int n, total = 0;
    scanf("%d", &n);
    int temp = n;
    int counter = Find_N(n);
    int Numbers[counter];
    for (int i = counter - 1; i >= 0; i--)
    {
        Numbers[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < counter; i++)
    {
        total += powerByNongPalmEIEI(Numbers[i], counter);
    }

    if (n == total)
    {
        printf("%d is Armstrong number.", n);
    }
    else
    {
        printf("%d isn't Armstrong number.", n);
    }

    return 0;
}