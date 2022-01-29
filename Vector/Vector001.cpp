#include <iostream>
#include<sstream>
#include <vector>
using namespace std;
int main(){
    vector<int> vector;
    std::vector<int> vector2(10);
    for(int i=0; i< 10; i++){
        vector.push_back(i);
    }
    copy(vector.begin(), vector.end(),vector2.begin());
    for(int i=0; i< 10; i++){
        cout<<vector[i]<<" ";
    }
    return 0;
}