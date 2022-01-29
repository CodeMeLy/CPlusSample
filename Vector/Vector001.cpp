#include <iostream>
#include <algorithm>// transform
#include<sstream>
#include <vector>
using namespace std;
int op_increase(int i){return ++i;}
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
    std::transform(vector.begin(),vector.end(),vector.begin(),op_increase);
    cout<<endl;
    for(int i:vector){
        cout<<i<<" ";
    }
    return 0;
}