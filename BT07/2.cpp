#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int tho = 0, rua = 0;
int randomnumber(int min, int max)
{
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

int main()
{
	srand((unsigned int)time(NULL));
	while (tho < 70 && rua < 70)
	{
		int rdn1 = randomnumber(1, 10);
		int rdn2 = randomnumber(1, 10);
		if (rdn1 >= 1 && rdn1 <= 5)
		{
			rua += 3;
		}
		else 
		if (rdn1 >= 6 && rdn1 <= 7)
		{
			rua -= 6;
			if (rua < 0) 
			{
				rua = 0;
			}
		}
		else
		{
			rua = rua + 1;
		}
		if (rdn2 >= 1 && rdn2 <= 2)
		{
			continue;
		}
		else 
		if (rdn2 >= 3 && rdn2 <= 4)
		{
			tho += 9;
		}
		else 
		if (rdn2 == 5)
		{
			tho -= 12;
			if (tho < 0)
			{
				tho = 0;
			}
		}
		else 
		if (rdn2 >= 6 && rdn2 <= 8)
		{
			tho += 1;
		}
		else
		{
			tho = tho - 2;
			if (tho < 0)
			{
				tho = 0;
			}
		}
		cout << "vi tri rua: " <<rua<<endl<<"vi tri tho: "<<tho<<endl;
	}
	if (tho >= 70 && rua >= 70)
	{
		cout << "rua hoa tho"<<endl;
	}
	else if (tho >= 70 && rua < 70) cout << "tho thang"<<endl;
	else cout << "rua thang"<<endl;
}