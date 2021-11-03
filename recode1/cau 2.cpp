#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    n=0;
    for (int i=0;i<s.size();++i){
        n=n+(s[i]-'0');
    }
    cout<<n;
    return 0;
}
