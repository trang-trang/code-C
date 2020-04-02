#include <stdio.h>
#include <math.h>
int main()
{
	//khai bao so nguyen
    int x;
    //thong bao nguoi dung nhap vao mot so
    printf("Nhap vao mot so: ");
    //nhap vao mot so
    scanf("%d", &x);
    //khai bao ham
    int isSquareNumber(int X);
    //su dung ham
    isSquareNumber(x);
    //neu 
    if(isSquareNumber(x))
    {
    	//in ra so do la so chinh phuong
    	printf("%d la so chinh phuong", x);
	}
	else
	{
		printf(" %d khong phai so chinh phuong", x);
	}
}
int isSquareNumber(int X)
{
	//khai bao bien a
	int a;
	//gan gia tri a bang can bac 2 cua x
    a = sqrt(X);
    //neu a nhan a bang x
    if(a * a == X) 
    {
    	//tra ve gia tri x
    	return X;
	}
	//tra ve gia tri 0
    return 0;
    	
}
