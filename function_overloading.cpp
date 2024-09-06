#include<bits/stdc++.h>
using namespace std;
class bike{
public:
   int nob;
   int speed;
   bike (int n, int s) : nob(n),speed(s) {}
   bike (int n) : nob(n),speed(10) {}        //constructor overloading
   bike () : nob(100),speed(200) {}
};
void add(int n,int m){
    cout<<n+m<<endl;
}                               //function overloading 
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int main(){

    
    //function overloading
   add(10,20);
   add(10,20,30);


   //constructor overloading
   bike tvs;
   cout<<tvs.speed<<endl;
   bike honda(29);
   cout<<honda.speed<<endl;
   bike tata(10,39);
   cout<<tata.speed<<endl;
    return 0;
}