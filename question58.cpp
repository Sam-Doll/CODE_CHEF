// MARIO AND TRANSFORMATION 649

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%3==0){
            cout<<"normal"<<endl;
        }
        else if(x%3==1){
            cout<<"huge"<<endl;
        }else{
            cout<<"small"<<endl;  
        }
    }
    return 0;
}
