#include<bits/stdc++.h>
using namespace std;
class student{
  public:
    int rol;
    string name;    //data member
    int a;
    int b;
    void show(){
        cout<<"Hellow Guys"<<endl; //member function  
    }
    void seta(int a){
        this->a = a;
    }
    void setb(int b){
        this->b = b;
    }
    //getter
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
};
student show(student n, student m){
      if(n.geta() > m.getb()) return n;
      else return m;
}
int main(){
    student tom;
    tom.a = 90;
    tom.b = 300;
    student majee;
    majee.a = 700;
    majee.b = 28490;
  student ans = show(tom,majee);
  cout<<ans.a<<endl;
  cout<<ans.b<<endl;
    return 0;
}