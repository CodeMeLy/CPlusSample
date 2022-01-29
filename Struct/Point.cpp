#include <iostream>
using namespace std;
typedef struct Point{
    int x,y;
};
int main(){
    Point point;
    point.x = 5;
    point.y = 6;
    cout<<"("<<point.x<<","<<point.y<<")";
    return 0;
}