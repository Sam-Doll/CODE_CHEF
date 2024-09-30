// HOW MANY DIGITS DO I HAVE 908

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin >> N;
    N = abs(N);
    if(N >= 0 && N <= 9) {
        cout << "1" << endl; 
    }else if(N >= 10 && N <= 99){
        cout << "2" << endl; 
    }else if(N >= 100 && N <= 999){
        cout << "3" << endl; 
    }else{
        cout << "More than 3 digits" << endl;  
    }
    return 0;
}