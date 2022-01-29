#include <iostream>
using namespace std;
typedef struct Point{
    int x,y;
};
void setData(Point &_point, int x, int y){
    _point.x = x;
    _point.y = y;
}
void enter(Point &_point){
    cout<<endl<<"x,y: ";
    cin>>_point.x>>_point.y;
}
void print(Point _point){
    cout<<"("<<_point.x<<","<<_point.y<<")";
}
int main(){
    Point point;
    setData(point,3,4);
    print(point);
    enter(point);
    print(point);
    return 0;
}