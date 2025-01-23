// Complementary Strand in a DNA 660

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        for(char c: s){
            if (c=='A') cout<<"T";
            else if(c=='T') cout<<"A";
            else if (c=='C') cout<< "G";
            else if (c=='G') cout << "C";
        }
        cout<<endl;
    }
    return 0;
}
 