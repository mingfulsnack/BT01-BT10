#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int sum = 0, summ = 0, turn = 1;
int randomnumber(int min, int max)
{
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

int main()
{
	srand((unsigned int)time(NULL));
	while (sum < 100 && summ < 100)
	{
		int rdn;
		rdn = randomnumber(1, 6);
		if (turn == 1)
		{
			sum += rdn;
			cout << "xuc xac nguoi choi 1: " << rdn << " 	" << "Tong nguoi 1: " << sum << endl;
			turn = 2;
		}
		else
		{
			summ += rdn;
			cout << "xuc xac nguoi choi 2: " << rdn << " 	" << "Tong nguoi 2: " << summ << endl;
			turn = 1;
		}
	}
	if (sum >= 100)
	{
		cout << "Nguoi choi 1 thang!";
	}
	else cout << "Nguoi choi 2 thang!";

}