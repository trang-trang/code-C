#include <stdio.h>// in ra giai thừa của một số nguyên
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int giaithua(int n);
    printf("the factorial value is: %d \n", giaithua(n));
}
int giaithua(int n)
{
    int gt = 1;
    int i;
    for(i = n; i > 0;i--)
        gt = gt *i;
    return gt;
}