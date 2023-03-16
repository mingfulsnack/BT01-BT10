#include <iostream>
#include <string.h>
using namespace std;
struct String {
    int n;
    char* str;
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    Destructor() {
        delete[] str;
    }
    void print(){
    cout << str << endl;
    }

    void append(const char* s) {
        int m = strlen(s);
        char* temp = new char[n + m + 1];
        strcpy(temp, str);
        strcpy(temp + n, s);
        delete[] str;
        str = temp;
        n += m;
    }
};

int main() {
    String s("Hello ");
    s.print();
    s.append("world!");
    s.print();
    return 0;
}
