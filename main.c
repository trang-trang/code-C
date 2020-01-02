#include<stdio.h>
int main()
{
    int R, s, c;
    float pi = 3.14;
    printf("\n Enter radius of circle: ");
    scanf("%d",&R);
    s = pi * R * R;
    c = (pi*R)*1/2;
    printf("\n Enter the perimeter and the area : %d %d",s, c);
    scanf("%d", &R);
    return 0;
}