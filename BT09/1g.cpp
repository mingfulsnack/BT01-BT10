#include <bits/stdc++.h>
using namespace std;

char* trim_left(const char* a)
{
    int len = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    char* res = new char[len - i + 1];
    strncpy(res, a + i, len - i);
    res[len - i] = '\0';
    return res;
}

int main() {
    const char str[] = "  minh";
    char* rstr = trim_left(str);
    cout << rstr << endl;
    delete[] rstr;
    return 0;
}
