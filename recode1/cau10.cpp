#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    float t;
    cin>>n;
    t=log(n)/log(5);
    if (int(t)==t){
        cout<<"n co dang 5^m";
    }else cout<<"n khong co dang 5^m";
    return 0;
}
