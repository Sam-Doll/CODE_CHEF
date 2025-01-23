//Minimum Bottles 656

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<< (sum+x-1)/x << endl;
      
    }
    return 0;
}
