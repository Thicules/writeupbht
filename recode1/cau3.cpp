#include <iostream>
using namespace std;

int main(){
    int x,n;
    float s,num,den;
    cin>>x>>n;
    s=0;
    num=1;
    den=0;
    for (int i=1;i<=n;i++){
        num=num*x;
        den=den+i;
        s=s+num/den;
    }
    cout<<s;
    return 0;
}
