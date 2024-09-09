// CHEF AND BIRD FARM 591

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    if(z%x==0&& z%y!=0){
        cout<<"chicken"<<endl;
    }else if(z%x!=0 && z%y==0){
        cout<<"duck"<<endl;
    }else if(z%x==0&&z%y==0){
        cout<<"any"<<endl;
    }else if(z%x!=0 && z%y!=0 ){
        cout<<"none"<<endl;
    }
}
return 0;
}
