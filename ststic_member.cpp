#include<bits/stdc++.h>
using namespace std;
class bike{
 public:
  static int nob;
   int tyre;
   int eng;
   bike (int tyre,int eng=900){   //static value class er hoi kono object er noi
      this->tyre = tyre;
      this->eng = eng;
   }
   static void increaseNob(){
    nob++;
}
};
int bike :: nob = 10;
  /*int bike :: nob declares a static member variable nob of type int and scope bike.
- The :: symbol is the scope resolution operator, which is used to specify that nob is a member of the bike class.
- = 10 initializes the nob variable with the value 10. */

int main(){
  bike tvs(123);
  bike tata(234);
  //cout<<tvs.tyre<<endl<<tvs.eng;
  tvs.increaseNob(); //using tvs
  cout<<tvs.nob<<endl<<tata.nob<<endl;
  tata.increaseNob(); //using tata
  cout<<tvs.nob<<endl<<tata.nob<<endl;
  bike :: increaseNob(); //class er modhe increase function call korlam
  cout<<tvs.nob<<endl<<tata.nob<<endl;
    return 0;
}