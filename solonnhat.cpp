#include <stdio.h>
int main()
{
	//khai bao 2 bien so nguyen
	int a, b;
	//thong bao nguoi dung nhap vao 2 so
	printf("Nhap vao 2 so: ");
	//nhap vao 2 so
	scanf("%d %d", &a, &b);
	int max(int a, int b);
	//khai bao ham tim max
	max(a,b);
	//in ra so lon nhat
	printf("So lon nhat la: %d", max(a,b));
	return 0;
}
int max(int a, int b)
{
	//neu a lon hon b
	if(a > b)
	{
		// in ra gia tri lon nhat la a
		return a;
	}
	//nguoc lai
	else
	{
	//in ra gia tri lon nhat la b
		return b;
	}
}
