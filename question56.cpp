// DETERMINE THE WINNER 626

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int p1,p2,q1,q2;
    cin>>p1>>p2>>q1>>q2;
    int penalty_p=max(p1,p2);
    int penalty_q=max(q1,q2);
    
    if(penalty_p > penalty_q){
        cout<<"q"<<endl;
    }else if (penalty_p < penalty_q){
        cout<<"p"<<endl;
    }else{
        cout<<"tie"<<endl;
    }
}
return 0;
}
