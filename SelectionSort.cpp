#include <iostream>
using namespace std;
int main (){
    int a ;
    cout << "Enter number of elements in the array :"<< endl ;
    cin >> a ;
    int arr[a];
    int n ;

    for ( int k=0 ; k < a ; k++ ){
        cout << "Enter array element " << k+1 << endl ;
        cin >> arr[k] ;
    }

    for ( int i = 0 ; i< (a-1) ; i++ ){

            if( arr[i] < arr[i+1] ){
                n = i ;
            }
            else{
                n = i+1 ;
            }
            int l = i+2;
            for ( l ; l<a ; l++){

                if ( arr[n] > arr[l] ){
                    n = l ;
                }
                       
            }
                        
        int t = arr[i] ;
        arr[i] = arr[n] ;
        arr[n] = t ;

    }

    cout << "Final sorted array is:" << endl << "[ ";
    for ( int j = 0 ; j < a ; j++)
    {cout << arr[j] << " " ;}
    cout << "]" ;

    return 0 ;
}