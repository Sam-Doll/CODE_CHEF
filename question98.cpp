// WHICH MIXTURE 841

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>0&&b>0){
            cout<<"solution"<<endl;
        }else if(b==0){
            cout<<"solid"<<endl;
        }else if(a==0){
            cout<<"liquid"<<endl;
        }
    }
    return 0;
}
