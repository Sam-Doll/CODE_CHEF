// PUPPY AND SUM 961

#include <iostream>
using namespace std;

int sum(int n){
    return n*(n + 1)/2;
}
int sumD(int d, int n){
    int result = n;
    for (int i = 0; i < d; ++i) {
        result = sum(result);
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int d,n;
        cin >> d >> n;
        cout<<sumD(d,n)<< endl;
    }
    return 0;
}
