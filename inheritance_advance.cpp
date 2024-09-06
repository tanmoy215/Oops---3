#include<bits/stdc++.h>
using namespace std;
class A{
    private: //can't be accessed , can't be inherited
     int a_pr;
    protected:  //can't be accessed , can be inherited
     int a_pt;
    public: //can be accessed, can be inherited 
     int a_pub;
};
class B : private A{  //this means a er theke jesob value asbe ta b er public k chole jbe
    public:
     int b_pub;
     void fun(){
        a
     }
};
int main(){
    B nm;
    nm.a_pub =20; //access a ka public but not acces a ka protechted
    nm.b_pub =90;  
    return 0;
}
/*security 
 low -> high (Possible);
 high -> low (not possible);  
                                low - public
                               medioum - protected    } this are access specifire
                               high - private

 */