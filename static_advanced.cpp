#include<bits/stdc++.h>
using namespace std;
class bike{
   public:
    static int nob;  //static member variable
     int tyre;
     int eng;
     bike (int tyre, int eng){
       this->eng = eng;
       this->tyre = tyre;
     }
     static void display(); //static member function
};
void bike::display(){
  cout<<nob<<endl;
  nob++;
}
int bike::nob = 10;
int nob = 567;
int main(){
bike tvs(123,90);
bike honda(234,100);
// tvs.display();
// honda.display();
int nob=100223;
cout<<bike::nob<<endl;
cout<<nob<<endl;
cout<<::nob<<endl;   //:: scope resolution
  return 0;
}