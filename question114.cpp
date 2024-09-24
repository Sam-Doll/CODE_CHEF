// CAR CHOICE 862

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if((x1*y2)<(x2*y1)){
            cout<< "1"<<endl;
        }else if((x1*y2)>(x2*y1)){
            cout<<"-1"<<endl;
        }else if((x1*y2)==(x2*y1)){
            cout<<"0"<<endl;
        }
    }
    return 0;
}
