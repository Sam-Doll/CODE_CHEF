// DEVENDRA AND WATER SPORTS 859

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        if((z-y)>=(a+b+c)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
