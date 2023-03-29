#include<bits/stdc++.h>
using namespace std;

void pad_right(char a[], int n)
{
    int len = strlen(a);
    if (len >= n) return;

    int kc = n - len;
    for (int i = 0; i < kc; i++)
    {
        a[len + i] = ' ';
    }
    a[n] = '\0';
}


int main() {
    char a[] = "minh";
    pad_right(a, 10);
    cout << a << endl;
    return 0;
}
