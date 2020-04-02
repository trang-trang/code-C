#include <stdio.h>
int main()
{
	//khai bao so nguyen
    int x;
    //thong bao nguoi dung nhap vao mot so
    printf(" Nhap vao mot so:");
    //nhap vao mot so
    scanf("%d", &x);
    
    int isEven(int X);
    //in ra so chan
    printf("so chan la: %d \n", isEven(x));
}
//ham so chan
int isEven(int X)
{
	//neu x chia het cho 2
    if(X % 2 == 0)
    {
    	//in ra so chan
        return X;
    }
    //khong phai so chan tra ve 0
	return 0;
}
