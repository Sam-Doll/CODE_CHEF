/*CHEF AND COUPON

STARTER1 DIV3 

*/
#include <iostream>
using namespace std ;

int main() {

    int T , D , C , A1 , A2 , A3 , B1 , B2 , B3 ;
    cin >> T ;
    for ( int i = 0 ; i < T ; i ++ ){
    cin >> D >> C ;
    cin >> A1 >> A2 >> A3 ;
    cin >> B1 >> B2 >> B3 ;
    
    if((A1+A2+A3)>=150 && (B1+B2+B3)>=150 ){

        if(2*D>C){
            cout << "YES" <<endl ;
        }else{
            cout << "NO" << endl ;
        }

    }
    else if((A1+A2+A3)>=150 || (B1+B2+B3)>=150){

        if(D>C){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }

    }else{
        cout << "NO" << endl ;
    }
    }
    return 0 ;
}




