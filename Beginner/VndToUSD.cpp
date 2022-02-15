#include<iostream>
using namespace std;
int main(){
    float vnd;
    float ty_gia;
    float usd;
    cout<<"VND: ";
    cin>>vnd;
    cout<<"Ty gia: ";
    cin>>ty_gia;
    usd = vnd * ty_gia;
    cout<<"USD: "<<usd;
    return 0;
}