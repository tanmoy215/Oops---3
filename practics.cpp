#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Tanmoy";
    int n= str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<"Final ans is : "<<str<<endl;
    return 0;
}