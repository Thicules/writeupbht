#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    float t;
    cin>>n;
    t=sqrt(n);
    if (int(t)==t){
        cout<<"n la so chinh phuong";
    } else cout<<"n khong la so chinh phuong";
    return 0;
}
