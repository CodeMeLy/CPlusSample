#include<iostream>
using namespace std;
float solution(int n){
    if(n==1){
        return (float)1/2;// ép kiểu
    }
    return solution(n-1) + (float)1/(n*(n+1));// ép kiểu
    
}
int main(){
    int n;
    cin>>n;
    cout<<solution(n)<<endl;
    return 0;
}