// INDIVISIBLE 787

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;  
    cin >> T;
    while (T--) {
        int A,B,C;
        cin>>A>>B>>C;
        for(int K=1;K<100;K++){
            if(A%K!=0 && B%K!=0 && C%K!=0){
                cout<<K<<endl;
                break;  
            }
        }
    }
    return 0;
}
