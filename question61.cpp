// BLACKJACK 681

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b;
    c=21-(a+b);
    if(c<11&&c>0){
        cout<<c<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}
