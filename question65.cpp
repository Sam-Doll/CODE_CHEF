// DECREMENT OR INCREMENT 722

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    if(n%4==0){
        n++;
        cout<<n;
    }else{
        n--;
        cout<<n;
    }
    return 0;
}
