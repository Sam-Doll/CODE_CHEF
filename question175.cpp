//Opposite Attract 671

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        string t = "";
        for(char c: s){
            if ( c == '0' ){
                t += '1';
            }else{
                t += '0';
            }
        }
        cout << t << endl;
    }
    return 0;
}
