#include <iostream>
using namespace std;
bool can(float a,float b,float c){
    if (a==b||a==c||b==c){
        return true;
    } else return false;
}
bool deu(float a,float b,float c){
    if (a==b&&b==c){
        return true;
    } else return false;
}
bool vuong(float a,float b,float c){
    if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
        return true;
    } else return false;
}
bool nhon (float a,float b,float c){
        if (a*a<b*b+c*c&&b*b<a*a+c*c&&c*c<a*a+b*b){
            return true;
        }else return false;
}

int main(){
    float x,y,z;
    cin>>x>>y>>z;
    if (x<0||y<0||z<0||abs(x-y)>=z||z>=x+y){
        cout<<"Nhap sai ";
        return 0;
    }
    if (vuong(x,y,z)==true){
        if (can(x,y,z)==true){
            cout<<"Tam giac vuong can";
            return 0;
        } else
            {
                cout<<"Tam giac vuong";
                return 0;
            }

    }
    if (deu(x,y,z)==true){
        cout<<"Tam giac deu";
        return 0;
    }
    if (can(x,y,z)==true){
        cout<<"Tam giac can";
        return 0;
    }
    if (nhon(x,y,z)==true){
        cout<<"Tam giac nhon";
        return 0;
    }else{
        cout<<"Tam giac tu";
        return 0;
        }
    return 0;
}
