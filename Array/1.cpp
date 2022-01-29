#include<iostream>
using namespace std;
int main(){
    int a[] = {100,200,300}; // vừa khai báo vừa khởi tạo mảng a
    int length = sizeof(a)/sizeof(a[0]);// tính số lượng phần tử của mảng a
    // in ra các phần tử trong mảng a
    for(int i=0; i<length; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}