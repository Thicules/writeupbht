#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,n,t;
    float s;
    cin>>x>>n;
    s=0;
    t=1;
    for (int i=1;i<=n;++i){
        t=t*x;
        s=sqrt(t+s);
    }
    cout<<s;
    return 0;
}
