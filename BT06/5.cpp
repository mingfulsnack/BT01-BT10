#include <iostream>
using namespace std;
int n, C[100], k;
bool Stop;
void Next_Division()
{
	int i, j, R, S, D;
	i = k;
	while (i > 0 && C[i] == 1) i--;
	if (i > 0)
	{
		C[i] = C[i] - 1;
		D = k - i + 1;
		R = D / C[i];
		S = D % C[i];
		k = i;
		if (R > 0)
		{
			for (j = i + 1; j <= i + R; j++) C[j] = C[i];
			k += R;
		}
		if (S > 0)
		{
			k++;
			C[k] = S;
		}
	}
	else Stop = true;
}

void Division()
{
	Stop = false;
	while (!Stop)
	{
		int i;
		for (i = 1; i <= k; i++) cout << C[i] << " ";
		cout << endl;
		Next_Division();
	}

}

int main()
{
	cin >> n;
	k = 1;
	C[k] = n;
	Division();
}
