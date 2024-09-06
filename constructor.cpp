#include<bits/stdc++.h>
using namespace std;
class bike{
 public:
   int tyresize;
                    //    bike (){    //default constructor 
                    //     cout<<"Constructor call hua"<<endl;
                    //    }
                //    bike (int tyresize){   //parameterized constructor
                //       cout<<"Constructor call hua"<<endl;
                //       this->tyresize = tyresize;
                //    }
                // bike (bike &n){
                //         tyresize = n.tyresize;     //copy constructor 
                // }
};
int main(){
   bike tvs;
   bike honda;
   honda.tyresize = 200;
   tvs.tyresize = 100;
   cout<<tvs.tyresize<<endl;
   cout<<honda.tyresize<<endl;  
    return 0;
}