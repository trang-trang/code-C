#include <stdio.h>
#include <math.h>

int main()
{
	//khai bao mang so nguyen
	int mang[10];
	int i;
	
	//nhap mang
	nhapmang(mang);
	
	//in mang
	inmang(mang);
	
	//duyet mang so nguyen, neu phan tu i la so chan thi in ra	
	printf("\nDanh sach so chan trong mang: ");
	for(i = 0; i < 10; i++)
	{
		if(lasochan(mang[i]))
			printf("%d ", mang[i]);
	}
	
	//duyet mang so nguyen, neu phan tu i la so nguyen to thi in ra
	printf("\nDanh sach so nguyen to trong mang: ");
	for(i = 0; i < 10; i++)
	{
		if(lasonguyento(mang[i]))
			printf("%d ", mang[i]);
	}
	
	//duyet mang so nguyen, neu phan tu i la so chinh phuong thi in ra
	printf("\nDanh sach so chinh phuong trong mang: ");
	for(i = 0; i < 10; i++)
	{
		if(lasochinhphuong(mang[i]))
			printf("%d ", mang[i]);
	}
	
	return 0;
}

//ham nhap vao mot mang
int nhapmang(int mang[])
{
	//than ham
	//khai bao bien so nguyen i
	int i;
	//khoi tao bo sinh so ngau nhien
	srand((int)time(0));
	for(i = 0; i < 10; i++)
	{
		//mang i bang 10 so ngau nhien
		mang[i] = rand() % 10;
	}
	return 0;
}

//ham in mang
int inmang(int mang[])
{
	//than ham
	//khai bao bien so nguyen i
	int i;
	for(i = 0; i < 10; i++)
	{
		//in ra mang i
		printf("%d ", mang[i]);
	}
	return 0;
}

//ham so chan
int lasochan(int n)
{
	//than ham
	// tra ve so chan n chia het cho 2
	return n % 2 == 0;
}

//ham so nguyen to
int lasonguyento(int n)
{
	//than ham
	//neu n be hon 2
	if(n < 2)
		// tra ve 0
		return 0;
	//khai bao bien so nguyen i
	int i;
	for(i = 2; i*i <= n; i++)
	{
		//neu n chia het cho i
		if(n % i == 0)
			//tra ve 0
			return 0;
	}
	//tra ve gtri so nguyen to
	return 1;
}

//ham so chinh phuong
int lasochinhphuong(int n)
{
	//than ham
	//neu n be hon 1
	if(n < 1)
		//tra ve gtri 0
		return 0;
	//khai bao bien canbachai gan gia tri bang can bac hai cua n
	int canbachai = sqrt(n);
	//tra ve gtri so chinh phuong
	return canbachai * canbachai == n;
}
