#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    stringstream stream;
    stream<<"hello world"<<42;
    cout<<stream.str()<<endl;
    return 0;
}