// DICE NUMBER 994

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int a=max({a1,a2,a3})*100+
        ((a1+a2+a3)-max({a1,a2,a3})-min({a1,a2,a3}))*10+ min({a1,a2,a3});
        int b=max({b1,b2,b3})*100+
        ((b1+b2+b3)-max({b1,b2,b3})-min({b1,b2,b3}))*10+ min({b1,b2,b3});
        if(a>b){
            cout<<"alice"<<endl;
        }else if(a<b){
            cout<<"bob"<<endl;
        }else{
            cout<<"tie"<<endl;
        }
    }
    return 0;
}
