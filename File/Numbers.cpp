#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string path  = "File/output/data1.out";// đường dẫn file: C:/Folder1/file.txt
    ofstream file(path);// khai bao file
    for(int i=0; i<10;i++){
        file<<i<<" ";
    }
    file.close();//dong file
    return 0;
}