#include<bits/stdc++.h>
using namespace std;

void truncate(char a[], int n)
{
    int len = strlen(a);
    if (len <= n) return;
    a[n] = '\0';
}


int main() {
    char a[] = "minh";
    truncate(a, 1);
    cout << a << endl;
    return 0;
}
