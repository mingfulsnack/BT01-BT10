#include <iostream>
#include <string.h>
using namespace std;
struct Point {
    double x;
    double y;
};
int main() {
    Point p;
    cin>>p.x;
    cin>>p.y;
    cout << &p << endl;
    cout << &p.x << endl;
    cout << &p.y << endl;
}
