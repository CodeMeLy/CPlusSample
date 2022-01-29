#include <iostream>
using namespace std;
bool solution1(int a[], int n, int x);// kiểm tra xem x có trong mảng hay không?
int solution2(int a[],int n, int x);// tìm tần suất xuất hiện của x trong mảng
int main(){
    int x = 3;// x là giá trị cần tìm
    int a[] = {1,2,3,4,5,3,3,3,3};
    int n = sizeof(a) / sizeof(a[0]);
    if(solution1(a,n,x)){
        cout<<x<<" tồn tại "<<solution2(a,n,x)<<" lần trong mảng"<<endl;
    } else{
        cout<<x<<" không tồn tại trong mảng"<<endl;
    }
    return 0;
}
bool solution1(int a[], int n, int x) {
    bool hasX = false;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            hasX = true;
            break;
        }
    }
    return hasX;
}
int solution2(int a[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            count++;
        }
    }
    return count;
}