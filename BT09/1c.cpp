#include <bits/stdc++.h>
using namespace std;

char* pad_right(const char a[], int n)
{
    int len = strlen(a);
    if (len >= n) return strdup(a);
    char* res = new char[n + 1];
    strcpy(res, a);
    for (int i = len; i < n; ++i) res[i] = ' ';
    res[n] = '\0';
    return res;
}

int main() {
    const char str[] = "minh";
    const int n = 7;
    const char c = 'i';
    char* rstr = pad_right(str, n);
    cout << rstr << endl;
    delete[] rstr;
    return 0;
}
