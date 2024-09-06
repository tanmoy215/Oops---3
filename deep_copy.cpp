#include<iostream>
#include<string>
using namespace std;
class cricketer{
  public:
   string name;
   int age;
   cricketer(string name,int age){  //constructor
    this->age = age;
    this->name = name;
   }
    cricketer(const cricketer& dc){   //copy constructor 
        this->age = dc.age;
        this->name = dc.name;
    }
};
int main(){
  cricketer virat("Virat Koholi",34);
  cout<<virat.age<<endl<<virat.name<<endl;
  cricketer rohit = cricketer(virat); //deep copy
  cout<<rohit.age<<endl<<rohit.name<<endl;
    return 0;
}