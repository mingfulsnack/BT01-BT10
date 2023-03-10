#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int a[200];

bool Ok(int x2, int y2)
{
	for (int i = 1; i < x2; i++)
		if (a[i] == y2 || abs(i - x2) == abs(a[i] - y2))
			return false;
	return true;
}

void Xuat(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			if (k == a[i]) cout << "*";
			else cout << ".";
		}
		cout << endl;
	}
	cout << endl;
}

void Try(int i, int n)
{
	for (int j = 1; j <= n; j++)
	{
		if (Ok(i, j))
		{
			a[i] = j;
			if (i == n) Xuat(n);
			Try(i + 1, n);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	Try(1, n);
	return 0;
}