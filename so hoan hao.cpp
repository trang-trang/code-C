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
    //khai bao ham so hoan hao
    int isPerfectNumber(int X);
    if(isPerfectNumber(x))
    {
		//in ra khong phai so nguyen to
    	printf(" %d la so hoan hao", x);
	}
	else
	{
		//in ra khong phaiso nguyen to
    	printf("%d khong phai la so hoan hao", x);
	}
    return 0;
}
int isPerfectNumber(int X)
{
    //khai bao va gan gia tri tong uoc cua x
    int S = 0;
    //vong lap chay tu bien so nguyen i bang 1 den x i tang
	for(int i = 1; i < X; i++)
	{
		//neu x chia het cho i
		if(X % i == 0)
		{
			//tong uoc bang tong cong i
			S += i;
		}
	}
	//neu tong uoc bang so x
	if(S == X)
	{
		//in ra so do la so hoan hao
		return X;
	}
	//khong phai so hoan hao
	return 0;
}
