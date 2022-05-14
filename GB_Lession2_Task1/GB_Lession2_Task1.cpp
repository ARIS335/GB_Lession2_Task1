
#include <stdbool.h>
#include <stdio.h>


bool Primer(int n)
{
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }
    else
        return false;  
}

int main()
{
    int n;

    printf("Enter some number: ");

    scanf_s("%d", &n);

    printf("It's prime: %d\n", Primer(n));
}