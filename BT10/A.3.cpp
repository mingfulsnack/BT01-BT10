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
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }
};
Point mid_point(const Point u, const Point v)
{
    Point uv;
    uv.x = (u.x+v.x)/2;
    uv.y = (u.y+v.y)/2;
    return uv;
}
int main() {

    Point p,q;
    cin>>p.x;
    cin>>p.y;
    p.print();
    cin>>q.x;
    cin>>q.y;
    cout<<"("<<mid_point(p,q).x<<","<<mid_point(p,q).y<<")"<<endl;
}
