// Access Code Equality 355

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s(7, ' ');
    cin>>s;
    if( s == "WECNITK"){
        cout<< "Welcome to Web Club!"<<endl;
    }else{
        cout<< "Access denied"<<endl;
    }

    return 0;
}