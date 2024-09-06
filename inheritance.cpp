#include<bits/stdc++.h>
using namespace std;
   class vehical{  //parent class,base class 
    public:
     int tyre;
     int eng;
     int light;
    string brand_name;
    vehical(){
        cout<<"Constructor for vehical"<<endl;
    }
         };
   class car : public vehical{ //child class   --  car inherit vehical
       public:
       int st;
       car(){
        cout<<"Constructor for car"<<endl;
       }
       };
    class bike : public vehical{  //child class ---  derive class
      public:
      int hand;
      bike(){
        cout<<"Constructor for bike"<<endl;
      }
     };

int main(){
    car suzuki;
    suzuki.brand_name = "MARUTI SUZUKI";
    suzuki.light=4;
    bike ktm;
    ktm.brand_name = "KTM";
    ktm.light=3;
    cout<<suzuki.brand_name<<endl<<ktm.brand_name<<endl;
    return 0;
}