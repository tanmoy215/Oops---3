#include<bits/stdc++.h>
using namespace std;
class vehical{   //*vptr & vtable
    public:
     int speed;
     int light;
    virtual void show(){
        cout<<"Mai Vehical hu"<<endl;
     }
};
class bike : public vehical{   //*vptr & vtable
 public:
 int hd;
  void show(){
    cout<<"Mai Bike Hu"<<endl;
  }  
};
int main(){
   vehical v;     //vptr - virtual pointer
                    //vtable  - virtual table
   bike b;
   cout<<sizeof(v)<<endl;  //sizeof - calculate total byte
   cout<<sizeof(b)<<endl;
    return 0;
}