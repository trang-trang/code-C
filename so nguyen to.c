#include <stdio.h>
#include <math.h>
int main()
{
	//khai bao bien so nguyen x
    int x;
    //thong bao nguoi dung nhap vao mot so
    printf("Nhap vao mot so: ");
    //nhap vao mot so
    scanf("%d", &x);
    //khai bao ham
    int isPrime(int X);
    //su dung  ham
    isPrime(x);
    if(isPrime(x))
    {
		//in ra khong phai so nguyen to
    	printf(" %d la so nguyen to", x);
	}
	else
	{
		//in ra khong phaiso nguyen to
    	printf("%d khong phai la so nguyen to", x);
	}
}
//ham so nguyen to
int isPrime(int X)
{
	int i;
	for( i = 2; i < X; i++)
	     if(X % i == 0)
	           return 0;
	return X;
}

