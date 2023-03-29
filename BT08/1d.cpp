#include<bits/stdc++.h>
using namespace std;

void pad_left(char a[], int n)
{
    int len = strlen(a);
    if (len >= n) return;
    int kc = n - len;
    for (int i = len + kc; i >= kc; i--)
    {
        a[i] = a[i - kc];
    }
    for (int i = 0; i < kc; i++)
    {
        a[i] = ' ';
    }
}


int main() {
    char a[] = "minh";
    pad_left(a, 10);
    cout << a << endl;
    return 0;
}
