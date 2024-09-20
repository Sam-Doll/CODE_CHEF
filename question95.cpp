// GOOD WEATHER 835

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int arr[7];
    while(t--){
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        int c=0;
        for(int i=0;i<7;i++){
            if(arr[i]==1){
                c++;
            } 
        }
        if(c>=4){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
