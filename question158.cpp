// Program Your Own CALCULATOR 1028

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
    double A, B;
    char C;
    cin >> A;
    cin >> B;
    cin >> C;
    cout<<fixed<<setprecision(6);
    if(C=='+'){
        cout << A+B << endl;
    }else if(C == '-'){
        cout << A-B << endl;
    }else if(C=='*'){
        cout << A*B << endl;
    }else if(C=='/'){
        cout << A/B << endl;
    }
    return 0;
}
