// THE MAN CODE 1032

#include <iostream>
#include <cmath>
using namespace std;

void u(int T, int t[]) {
    for (int i = 0; i < T; ++i) {
        int N = t[i];
        int max = ceil(N / 2.0);
        int min = ceil(N / 3.0);
        cout << max << " " << min << endl;
    }
}
int main() {
    int T;
    cin >> T;
    int t[T];
    for(int i = 0; i < T; ++i){
        cin>>t[i];
    }
    u(T, t);
    return 0;
}
