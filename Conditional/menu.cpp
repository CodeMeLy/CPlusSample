#include<iostream>
using namespace std;
enum LuaChon{
    LUACHON1 = 1,
    LUACHON2 = 2
};
int main(){
    int luachon;
    do{
        cout<<"nhap lua chon:";
        cin>>luachon;
        switch(luachon){
            case 1:
                cout<<"Ban da lua chon 1"<<endl;
                break;
            case 2:
                cout<<"Ban da lua chon 2"<<endl;
                break;
            default:
                cout<<"Lua chon khong hop le!!!";
                break;
        }
            cout<<"Nhap vao 1 de thoat chuong trinh:";
            cin>>luachon;
    } while (luachon!=1);
    return 0;
}