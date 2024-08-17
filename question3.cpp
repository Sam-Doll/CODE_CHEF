/*INDEPENDENCE DAY FLAG - 147*/

#include<iostream>
#include <algorithm>
using namespace std ;

string flag(int A, int B , int C){
    int max_color = max({A,B,C});
    int total_other_two = A + B + C - max_color;
    if (max_color<=total_other_two+1){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){

    int T ;
    cin >> T ;
    while(T--){
        int A , B , C ;
        cin >> A >> B >> C ;
        cout << flag(A,B,C) << endl ;
    }
    return 0;
}