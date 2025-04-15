#include <stdio.h>

int main()
{
    int x;
    long long int p;
    scanf("%d %lld", &x, &p);

    float op = (p * 100) / (100.0 - x);
    printf("%.2f\n", (float)op);

    return 0;
}