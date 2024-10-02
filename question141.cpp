// TWO VS TEN 936

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%5==0){
            if(x%2==0){
                cout<<"0"<<endl;
            }else{
                cout<<"1"<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
