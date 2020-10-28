#include"thuvien_lap3.h"
void main()
{
	DAYSO d;
	nhapDS(d);
	xuatDS(d);
	cout << "\nMin la: " << timMin(d);
	int kq = hamA(d);
	cout << "\nHamA la: " << kq;
	DAYSO a1, a2, a3;
	cout << "\nNhap day so thu 1:";
	nhapDS(a1);
	xuatDS(a1);
	cout << "\nNhap day so thu 2:";
	nhapDS(a2);
	xuatDS(a2);
	cout << "\nDay so thu 1 sap tang dan: ";
	BubbleSort(a1);
	xuatDS(a1);
	cout << "\nDay so thu 2 sap tang dan: ";
	BubbleSort(a2);
	xuatDS(a2);
	a3 = tronDS(a1, a2);
	cout << "\nDay so da duoc tron tang dan: ";
	xuatDS(a3);
	DAYSO b1,b2;
	cout << "\nNhap day so:";
	nhapDS(b1);
	xuatDS(b1);
	system("pause");
}