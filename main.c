#include<stdio.h>
int main()
{
    int score ;
    printf("\n nhap vao diem:");
    scanf(" %d",  &score);
    if(score >= 75)
        printf("\n The Grade is : A\n");
    else if(score >= 60)
        printf("\n The Grade is : B\n");
    else if(score >= 45)
        printf("\n The Grade is : C\n");
    else if(score >= 35)
        printf("\n The Grade is : D\n");
    else
        printf("\n The Grade is : E\n");
    return 0;
}