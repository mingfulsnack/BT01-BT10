#include<bits/stdc++.h>
using namespace std;

void trim_left(char a[])
{
    int i = 0,j = 0;
    while (a[i] == ' ') {
        i++;
    }
    while (a[i] != '\0') {
        a[j] = a[i];
        i++;
        j++;
    }
    a[j] = '\0';
}

int main() {
    char a[] = "  minh";
    trim_left(a);
    cout << a;
    return 0;
}
