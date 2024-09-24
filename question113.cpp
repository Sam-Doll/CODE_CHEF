// TOTAL EXPENSES 861

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        float q,p;
        cout << fixed << setprecision(6);
        cin>>q>>p;
        if(q>1000){
            cout<<((q*p)-(0.1*(q*p)))<<endl;
        }else{
            cout<<q*p<<endl;
        }
    }
    return 0;
}
