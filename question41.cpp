// ENORMOUS INPUT TEST 464

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k , count=0;
    cin>>n>>k;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]%k==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
