#include <iostream>
#include <string.h>
using namespace std;
struct Point {
    double x;
    double y;
};
void ThamTri(Point p) {
    cout << &p << endl;
}
void ThamChieu(Point& p) {
    cout << &p << endl;
}
int main() {
    Point p;
    cin>>p.x;
    cin>>p.y;
    cout << &p << endl;
    ThamTri(p);
    cout << &p << endl;
    ThamChieu(p);

}
