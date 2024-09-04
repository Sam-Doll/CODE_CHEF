// MAX MINUS MIN 239

#include <iostream>
using namespace std ;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b , c , max_num , min_num ;
        cin >> a >> b >> c ;
        if(a>b && a>c){
            max_num = a;
            if(b<c){
                min_num = b ;
            }else{
                min_num = c ;
            }
        }
        else if(b>a && b>c){
            max_num = b;
            if(a<c){
                min_num = a ;
            }else{
                min_num = c ;
            }
        }
        else {
            max_num = c;
            if(a<b){
                min_num = a ;
            }else{
                min_num = b ;
            }
        }
        cout<< (max_num - min_num) << endl ;
    }
    return 0;
}