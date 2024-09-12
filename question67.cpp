// COUNT THE ACs 739

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int a=p/100;
        int b= p%100;
        if(b<=10-a){
        cout<<a+b<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}


