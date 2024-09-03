//CAPITAL GAIN TAX 311

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x , y ;
    cin >> x >> y ;
    if (x>y){
        cout << "decreased" << endl ;
    }else if(y>x){
        cout << "increased" << endl ;
    }else{
        cout << "same" << endl ;
    }
    return 0;
}