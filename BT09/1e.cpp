#include <bits/stdc++.h>
using namespace std;

char* truncate(const char a[], const int n)
{
    int len = strlen(a);
    if (len <= n) {
        char* res = new char[len+1];
        strcpy(res, a);
        return res;
    }
    char* res = new char[n+1];
    strncpy(res, a, n);
    res[n] = '\0';
    return res;
}

int main() {
    const char str[] = "minh";
    const int n = 1;
    char* rstr = truncate(str,1);
    cout << rstr << endl;
    delete[] rstr;
    return 0;
}
