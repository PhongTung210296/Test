// khai bao lop va dinh nghia lop so huu ti , va dinh nghia lai cac phep toan == khacs tren lop do
#include<iostream>
using namespace std;
class HuuTy
{
protected:
	float tuSo;
	float mauSo;
public:
	HuuTy();
	HuuTy(float x, float y);
	void Nhap();
	int  operator == (HuuTy ht1);
	int operator!=(HuuTy ht1);
};
HuuTy::HuuTy()
{
	tuSo= mauSo = 0;
}
HuuTy::HuuTy(float x, float y)
{
	this->tuSo = x;
	this->mauSo = y;
}
int HuuTy::operator == (HuuTy ht1)			// them const sau la khong thay doi thuoc tinh cua doi tuong trong ham
{
	if (tuSo*ht1.mauSo == mauSo*ht1.tuSo)
		return 1;
	else
		return 0;
}
int HuuTy::operator!=(HuuTy ht1)
{
	if (tuSo*ht1.mauSo != mauSo*ht1.tuSo)
		return 1;
	else
		return 0;
}
void HuuTy::Nhap()
{
	cout << "nhap vao tu so : ";
	cin >> tuSo;
	do
	{
		cout << "nhap vao mau so :";
		cin >> mauSo;
	} while (mauSo == 0);
}
int main()
{
	HuuTy ht, ht1;
	ht1.Nhap();
	ht.Nhap();
	if (ht1 == ht)
		cout << "bang nhau";
	else
		cout << "khong bang";
	system("pause");
	return 0;
}