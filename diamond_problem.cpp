#include<bits/stdc++.h>
using namespace std;
/*Classes B and C are derived from class A using virtual inheritance (virtual public A). This ensures that only one instance of class A is inherited by class D, avoiding diamond problem. */
class A{
    public:
    int a_public;
};
class B : virtual public A{
    public:
    int b_public;
};
class C : virtual public A{
    public:
    int c_public;
};
class D : public B,public C{
    public:
    int d_public;
};
int main(){
        D d;
        d.a_public = 10;
        cout<<" CLASS A : "<<d.a_public<<endl;
        d.b_public = 20;
        cout<<"CLASS B : "<<d.b_public<<endl;
        d.c_public = 100;
        cout<<"CLASS C : "<<d.c_public<<endl;

    return 0;
}