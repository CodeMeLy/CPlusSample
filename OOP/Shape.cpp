#include <iostream>
using namespace std;
class Shape{
    public:
        virtual void description() const {std::cout<<"This is shape."<<std::endl;}
        virtual double getSurface() const = 0;
        virtual double getDoubleSurface() const {
            return getSurface() * 2;
        };
};
int main(){

    return 0;
}