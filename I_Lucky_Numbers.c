#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int first_digit = N / 10;
    int second_digit = N % 10;

    if ((second_digit != 0 && first_digit % second_digit == 0) ||
        (first_digit != 0 && second_digit % first_digit == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}