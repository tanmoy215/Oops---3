#include<bits/stdc++.h>
using namespace std;
class bike{  //class
 public:               //access specifire 
  string name;
   int cc;
   int tyre;
   bike (){
    cout<<"Constructor call hua hai"<<endl;   //constructor
   }
   ~bike (){
    cout<<"Destructor call hua hai"<<endl;    //destructor
   }
};
int main(){
   bike tvs;  //object
    return 0;
}