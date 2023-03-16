#include <iostream>
#include <string.h>
using namespace std;
struct Point {
    double x;
    double y;
    void print()
    {
        double _x = x;
        double _y = y;
        cout<<"("<<_x<<","<<_y<<")";
    }
};
int main() {

    Point p;
    cin>>p.x;
    cin>>p.y;
    p.print();
}
