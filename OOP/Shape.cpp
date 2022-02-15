#include <iostream>
using namespace std;
class Point{
    private:
        float x, y;
    public:
        void setX(int _x){
            this->x = _x;
        }
        void setY(int _y){
            this->y = _y;
        }
}
class Shape{
    public:
        virtual void description() const {std::cout<<"This is shape."<<std::endl;}
        virtual double getSurface() const = 0;
        virtual double getDoubleSurface() const {
            return getSurface() * 2;
        };
        
};
class Rectangle:Shape{
    private:
        float width, height;
    public:
        Rectangle(){};
        void description() const {std::cout<<"This is Rectangle."<<std::endl;}
        double getSurface() const {return width*height;}
};
int main(){
    Rectangle rectangle = Rectangle();
    rectangle.description();
    return 0;
}