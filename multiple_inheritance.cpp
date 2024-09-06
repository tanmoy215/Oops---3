#include<bits/stdc++.h>
using namespace std;    
//multiple inheritance means multiple parent class or base class are present 
//multiple base class and single derive class are present 
class A{
    private : 
    int a_private;
    protected:
    int a_protected;
    public:
    int a_public;
};
class B{
    public:
     int b_public;
};
class C : public A, public B{
       public:
       int c_public;
};
int main(){
  C c;
    return 0;
}