// BEST OF TWO 789

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int am=a1+a2+a3-min(a1,min(a2,a3));
        int bm=b1+b2+b3-min(b1,min(b2,b3));
        if(am>bm){
            cout<<"alice"<<endl;
        }else if(bm>am){
            cout<<"bob"<<endl;
        }else if (am==bm){
            cout<<"tie"<<endl;
        }
    }
    return 0;
}
