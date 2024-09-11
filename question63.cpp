// CHEF AND HIS APPS 702

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int s,x,y,z,space;
        cin>>s>>x>>y>>z;
        space=s-(x+y);
        if(z<=space){
            cout<<"0"<<endl;
        }else if(z>space){
            int need = z-space ;
            if(need<=x||need<=y){
                cout<<"1"<<endl;
            }else if(need<=x+y){
                cout<<"2"<<endl;
            }
        }
    }
return 0;
}
