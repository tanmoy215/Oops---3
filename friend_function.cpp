#include<bits/stdc++.h>
using namespace std;
class vehical{
    private:
    int speed;
    public:
     vehical(int s) : speed(s) {}
     friend void printSpeed(vehical& sp); //friend function declaration
};
void printSpeed(vehical& sp){  //friend function definition
    cout<<"Speed is : "<<sp.speed<<endl;  //access the private member speed
}
int main(){
    vehical ans(68);
    printSpeed(ans); //
    return 0;
}