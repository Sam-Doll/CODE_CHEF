// CHANGE ROW AND COLUMN BOTH 660

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        if(ey!=sy && ex!=sx){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}
