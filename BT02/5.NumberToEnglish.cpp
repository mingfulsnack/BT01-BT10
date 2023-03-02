
#include <iostream>
using namespace std;

string he1[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven", "twelve",
                 "thirteen", "fourteen", "fifteen",
                 "sixteen", "seventeen", "eighteen",
                 "nineteen" };

string he10[] = { "", "", "twenty", "thirty", "forty",
                 "fifty", "sixty", "seventy", "eighty",
                 "ninety" };

string chuyen(int n, string s)
{
    string str = "";

    if (n > 19)
        str += he10[n / 10] + "-" + he1[n % 10];
    else
        str += he1[n];

    if (n)
        str += s;

    return str;
}


string chuyen2(long n)
{

    string out;

    out += chuyen(((n / 100000) % 100), "million ");

    out += chuyen(((n / 1000) % 100), "thousand ");

    out += chuyen(((n / 100) % 10), "hundred ");

    out += chuyen((n % 100), "");

    if(out=="")
    out = "zero";

    return out;
}


int main()
{

    long long n;
    cin>>n;
    if(n<0) cout<<"negative "<<chuyen2(n);
    cout << chuyen2(n) << endl;
    return 0;
}
