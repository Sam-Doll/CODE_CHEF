//HEALTHY SLEEP 250

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int H;
    cin>> H;
    if(H>8){
        cout<<"MORE";
    }else if (H==8){
        cout <<"PERFECT";
        
    }else{
        cout<<"LESS";
    }
    return 0;
}
