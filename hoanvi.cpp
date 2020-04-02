#include <stdio.h>
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
