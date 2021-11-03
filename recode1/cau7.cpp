#include <iostream>
using namespace std;

int main()
{
    int n,a,in3,in7;
    cin>>n;
    a=-2;
    in3=6;
    in7=42;
    for (int i=2;i<=n;++i){
        in3=in3*3;
        in7=in7*7;
        a=5*a+in3-in7+12;
    }
    cout<<a;
    return 0;
}
