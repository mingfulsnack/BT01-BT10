#include<bits/stdc++.h>
using namespace std;

void trim_right(char a[]) 
{
    int len = strlen(a);
    int i = len - 1;
    while (i >= 0 && a[i] == ' ') 
    {
        a[i] = '\0';
        i--;
    }
}

int main() {
    char a[] = "minh  ";
    trim_right(a);
    cout << a;
    return 0;
}
