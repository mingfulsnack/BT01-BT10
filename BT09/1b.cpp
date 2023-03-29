#include <bits/stdc++.h>
using namespace std;

char* delete_char(const char a[], const char c)
{
    int len = strlen(a);
    int dem = 0;
    for (int i = 0; i < len; i++)
    {
    if (a[i] == c) dem++;
    }
    char* result = new char[len - dem + 1];
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] != c)
        {
            result[j++] = a[i];
        }
    }
    result[len - dem] = '\0';
    return result;
}

int main() {
    const char str[] = "minh";
    const char c = 'i';
    char* rstr = delete_char(str, c);
    cout << rstr << endl;
    delete[] rstr;
    return 0;
}
