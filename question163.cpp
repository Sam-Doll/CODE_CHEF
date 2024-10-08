// BUYING NEW TABLET 1037

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, B;
        cin >> N >> B;
        int maxArea = 0;
        bool foundTablet = false;

        for(int i = 0; i < N; i++){
            int W, H, P;
            cin >> W >> H >> P;
            if (P <= B) {
                foundTablet = true;
                maxArea = max(maxArea, W * H);
            }
        }
        if(foundTablet){
            cout << maxArea << endl;
        }else{
            cout<<"no tablet" << endl;
        }
    }
    return 0;
}
