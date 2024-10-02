// DIVISIBLE BY 3 978

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int modA=a%3;
        int modB=b%3;
        if(modA==0||modB==0){
            cout<<0<<endl;
        }else if(modA==1 && modB==1){
            cout << 1 << endl;
        }else if(modA==2 && modB==2){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}
