// MILEAGE MATTERS 831

#include <bits/stdc++.h>
using namespace std;

string calc(double N, double X, double Y, double A, double B) {
    double p = (N / A) * X;
    double d= (N / B) * Y;
    if(p<d){
        return "PETROL";
    }else if(d<p){
        return "DIESEL";
    }else{
        return "ANY";
    }
}
int main() {
	// your code goes here
    int T;
    cin >> T;  
    while(T--){
        double N, X, Y, A, B;
        cin >> N >> X >> Y >> A >> B; 
        cout << calc(N, X, Y, A, B) << endl;
    }
    return 0;
}
