#include <bits/stdc++.h>
using namespace std;

char* trim_right(const char* a)
{
    int n = strlen(a);
    while (n > 0 && isspace(a[n-1]))
    {
    n--;
    }
    char* res = new char[n+1];
    strncpy(res, a, n);
    res[n] = '\0';
    return res;
}

int main()
{
    const char str[] = "minh   ";
    char* rstr = trim_right(str);
    cout << rstr << endl;
    delete[] rstr;
    return 0;
}
