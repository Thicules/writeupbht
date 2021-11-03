#include <iostream>
#include <iomanip>
using namespace std;

const float e=0.000001;
int main()
{
    float s;
    int i;
    cout<<fixed<<setprecision(6);
    i=1;
    s=0;
    while (1.0/i>=e){
        s=s+1.0/i;
        i++;
    }
    cout<<s;
    return 0;
}
