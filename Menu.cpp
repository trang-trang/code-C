#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//ham void hoan vi con tro den 2 so nguyen a va b
void swap(int *a, int *b)
{
	//bien temp bang con tro toi gia tri a
	int temp = *a;
	//con tro toi gia tri a bang con tro toi gia tri b 
	*a = *b;
	//con tro toi gia tri b bang  bien temp
	*b = temp;
}
int main()
{
	int Menu;
	//in ra danh sach menu
	printf("==========Menu=========\n");
	printf("Chon 1, 2, 3, 4, 5, 6, 7:\n");
	printf("1. So chan\n");
	printf("2. So nguyen to\n");
	printf("3. So chinh phuong\n");
	printf("4. So hoan hao\n");
	printf("5. So lon nhat\n");
	printf("6. Hoan vi\n");
	printf("7. Thoat!!!\n");
	printf("Nhap lua chon cua ban: ");
	scanf("%d", &Menu);
	switch(Menu){
		case 1:
			printf("So chan:\n");
			{
				//khai bao so nguyen
			    int x;
			    //thong bao nguoi dung nhap vao mot so
			    printf(" Nhap vao mot so: \n");
			    //nhap vao mot so
			    scanf("%d", &x);
			    //khai bao ham
			    int isEven(int X);
			    //in ra so chan
			    printf("so chan la: %d \n", isEven(x));
			    return 0;
			}
		case 2:
			printf("So nguyen to:\n");
			{
				//khai bao bien so nguyen x
			    int x;
			    //thong bao nguoi dung nhap vao mot so
			    printf("Nhap vao mot so: ");
			    //nhap vao mot so
			    scanf("%d", &x);
			    //khai bao ham
			    int isPrime(int X);
			    //in ra so nguyen to
			    printf("So nguyen to la: %d \n", isPrime(x));
			    return 0;
			}
		case 3:
			printf("So chinh phuong:\n");
			{
				//khai bao so nguyen
			    int x;
			    //thong bao nguoi dung nhap vao mot so
			    printf("Nhap vao mot so: ");
			    //nhap vao mot so
			    scanf("%d", &x);
			    //khai bao ham
			    int isSquareNumber(int X);
			    //in ra so do la so chinh phuong
			    printf("so chinh phuong la: %d \n",isSquareNumber(x));
			    return 0;
			}
		case 4:
			printf("So hoan hao:\n");
			{
				//khai bao bien so nguyen x
			    int x;
			    //thong bao nguoi dung nhap vao mot so
			    printf("Nhap vao mot so: ");
			    //nhap vao mot so
			    scanf("%d", &x);
			    //khai bao ham so hoan hao
			    int isPerfectNumber(int X);
			    //in ra so do la so hoan hao
			    printf("So hoan hao la: %d\n", isPerfectNumber(x));
			    return 0;
			}
		case 5:
			printf("So lon nhat:");
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
		case 6:
			printf("Hoan vi:\n");
			{
				//khai bao 2 bien so nguyen
				int a, b;
				//thong bao nguoi dung nhap vao 2 so
				printf("Nhap vao 2 so: ");
				//nhap vao 2 so
				scanf("%d %d", &a, &b);
				//in ra man hinh ket qua a va b
				printf("Ban da nhap:\na = %d \nb = %d\n", a, b);
				//khai bao ham hoan vi
				swap(&a,&b);
				//in ra ket qua hoan vi
				printf("Sau khi hoan vi la: \na = %d \nb = %d\n", a, b);
				return 0;
			}
		}
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
//ham so nguyen to
int isPrime(int X)
{
	//neu so X nho hon 2
	if(X < 2)
		//khong phai so nguyen to
		return 0;
    {
    	//neu X chia het cho 2
        if (X % 2 == 0)
        {
        	//khong phai so nguyen to
           	return 0; 
        }
        //la so nguyen to
        return X;
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

