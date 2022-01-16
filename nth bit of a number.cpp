#include <stdio.h>

int main()
{
    int num, n, bit;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to check : ");
    scanf("%d", &n);
    bit = (num >> n) & 1;

    printf("The %d bit is set to %d", n, bit);

    return 0;
}
