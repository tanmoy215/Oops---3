#include<bits/stdc++.h>
using namespace std;
// function overriding
class vehical{
    public:
    int speed;
     int light;
     int fuel;
     virtual void show(){
        cout<<"Mai Vehical Hu"<<endl;
     }
};
class bike : public vehical{
  public:
   int hd;
   void show(){
    cout<<"Mai bike HU"<<endl;
   }
};
int main(){
    //compiler POV - vehical type ka hai
    //runtime POV - bike ka address hai
    //basically compile time binding hoi jodi virtual thake tahole runtime binding hobe
    vehical *a;
    bike b;
    a = &b;
     a->show();
    return 0;
}