#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int randomorg(int n)
{
	int r = rand() % n;
	return r;
}
int main()
{
	int n;
	cin >> n;
	cout << randomorg(n);

}