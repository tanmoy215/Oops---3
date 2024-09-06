#include<bits/stdc++.h>
using namespace std;
class student{
    public:
     string name;
     int roll;
     float per;
};
int main(){
     student tom;
     tom.name = "tanmoy majee";
     tom.per=90;
     tom.roll=215;
     student mon = tom;
      cout<<"NAME : "<<mon.name<<endl<<"PERCENTAGE : "<<mon.per<<endl<<"ROLL : "<<mon.roll<<endl;
      tom.name = "TAPAS MAJEE";
      cout<<mon.name<<endl;
    return 0;
}