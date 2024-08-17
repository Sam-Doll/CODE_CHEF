/*Truth Teller And Liars 101 -147 */

#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--) {
    int N, M;
    cin >> N >> M;
    if (N > M) {
        cout << M + 1 << endl;
    }else{
        cout << -1 << endl;
    }
    }

    return 0;
}