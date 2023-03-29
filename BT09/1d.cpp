#include <bits/stdc++.h>
using namespace std;

char* pad_left(const char a[], int n)
{
    int len = strlen(a);
    if (len >= n) {
        char* res = new char[len + 1];
        strcpy(res, a);
        return res;
    }
    char* res = new char[n + 1];
    int kc = n - len;
    for (int i = 0; i < kc; i++)
    {
        res[i] = ' ';
    }
    strcpy(res + kc, a);
    return res;
}

int main() {
    const char str[] = "minh";
    const int n = 7;
    char* rstr = pad_left(str, n);
    cout << rstr << endl;
    delete[] rstr;
    return 0;
}
