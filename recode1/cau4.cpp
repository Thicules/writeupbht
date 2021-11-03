#include <iostream>
using namespace std;

int main()
{
    int x,s,n,t;
    cin>>x>>n;
    x=x*x;
    s=0;
    t=1;
    for (int i=1;i<=n;++i){
        t=t*x*(-1);
        s=s+t;
    }
    cout<<s;
    return 0;
}
