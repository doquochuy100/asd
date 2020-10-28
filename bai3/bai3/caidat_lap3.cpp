#include "thuvien_lap3.h"

void nhapDS(DAYSO &a)
{
	cout << "\nNhap so phan tu : ";
	cin >> a.n;
	for (int i = 0; i < a.n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a.list[i];
	}
}
void xuatDS(DAYSO a)
{
	for (int i = 0; i < a.n; i++)
		cout << a.list[i] << "  ";
}
int timMin(DAYSO a)
{
	int min = a.list[0];
	for (int i = 0; i < a.n; i++)
		if (a.list[i] < min)
			min = a.list[i];
	return min;
}
int hamA(DAYSO a)
{
	int flag = 0;
	int kq;
	for (int i = 0; i < a.n; i++)
		if (a.list[i]%3==0 && a.list[i] > 0)
			if (flag == 0) {
				kq = a.list[i];
				flag = 1;
			}
			else if (a.list[i] > kq )
				kq = a.list[i];
				
	return kq;
}
void BubbleSort(DAYSO &a)
{
	int i, j, x;
	for (i = 0; i < a.n - 1; i++)
		for (j = a.n - 1; j > i; j--)
			if (a.list[j] > a.list[j - 1])
			{
				x = a.list[j];
				a.list[j] = a.list[j - 1];
				a.list[j - 1] = x;
			}
}
DAYSO tronDS(DAYSO a, DAYSO b)
{
	DAYSO c;
	int i = 0, j = 0, k = 0;
	c.n = a.n + b.n;
	while (i < a.n && j < b.n)
	{
		if (a.list[i] < b.list[j])
		{
			c.list[k] = a.list[i];
			i++;
		}
		else
		{
			c.list[k] = b.list[j];
			j++;
		}
		k++;
	}
	while (i < a.n)
	{
		c.list[k] = a.list[i];
		i++;
		k++;
	}
	while (j < b.n)
	{
		c.list[k] = b.list[j];
		j++;
		k++;
	}
	return c;
}
