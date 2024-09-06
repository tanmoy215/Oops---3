#include<bits/stdc++.h>
using namespace std;
class A{
 private:
  int a_private;
  protected:
  int a_protected;
  public:
  int a_public;
};
class B : protected A{  //a_protected,a_public as protected
    public:
     int b_public; 
};
class C : public B{ //b_public as public , a_protected,a_public as protected
    public:

};
int main(){

    return 0;
}