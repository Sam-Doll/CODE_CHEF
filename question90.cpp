// GROSS SALARY 823

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;  
    while(T--){
        float s;
        cin >> s;  
        float HRA, DA, g;
        if(s< 1500){
            HRA = 0.10 * s;
            DA = 0.90 * s;
        }else{
            HRA = 500;
            DA = 0.98 * s;
        }
        g= s+ HRA + DA;
        cout<<fixed<<setprecision(2)<<g<<endl;
    }
    return 0;
}
