#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int giaithua(int n) {
	if (n == 1) return 1;
	if (n == 0) return 1;
	return n * giaithua(n - 1);
}
int tohop(int k, int n)
{
	return giaithua(n) / (giaithua(k) * giaithua(n - k));

}
int main()
{
	int k, n;
	for (;;)
	{
		cin >> k >> n;
		cout << tohop(k, n);
		if (k == -1 && n == -1) return 0;
	}
	

}