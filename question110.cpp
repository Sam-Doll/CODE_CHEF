// AREA OR PERIMETER 858

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int l,b;
	cin>>l;
	cin>>b;
	if((2*(l+b))>(l*b)){
	    cout<<"peri"<<endl;
	    cout<<2*(l+b)<<endl;
	}else if((2*(l+b))<(l*b)){
	    cout<<"area"<<endl;
	    cout<<l*b<<endl;
	}else{
	    cout<<"eq"<<endl;
	    cout<<l*b<<endl;
	}
return 0;
}
