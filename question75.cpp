// RCB AND PLAYOFFS 788

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int k=y-x;
        if(k<=z*2){
            cout<<"yes"<<endl;
        }else if(k<=z*1){
            cout<<"yes"<<endl;
        }else if(x==y){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
