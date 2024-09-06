#include<bits/stdc++.h>
using namespace std;
class bike{
    public:
     int nob;
     int tyre;
     int eng;
     bike(int n, int t, int e) : nob(n),tyre(t),eng(e){} //Initialisation list
};
int main(){
     int n,t,e;
     cout<<"enter nob,tyre ande eng : ";
     cin>>n>>t>>e;
     bike tvs(n,t,e);
     cout<<tvs.nob<<endl<<tvs.tyre<<endl<<tvs.eng<<endl;
    return 0;
}