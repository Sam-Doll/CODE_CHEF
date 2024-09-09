// BUS SEAT NUMBERING 613

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>0&&n<=10){
            cout<<"lower double"<<endl;
        }else if(n>=11&&n<=15){
            cout<<"lower single"<<endl;
        }else if(n>=26&&n<=30){
            cout<<"upper single"<<endl;
        }else if(n>=16&&n<=25){
            cout<<"upper double"<<endl;
        }
    }
    return 0;
}
