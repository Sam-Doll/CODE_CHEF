// TCS EXAMINATION 1006

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int d_dsa, d_toc, d_dm;
        int s_dsa, s_toc, s_dm;
        
        cin >> d_dsa >> d_toc >> d_dm;
        cin >> s_dsa >> s_toc >> s_dm;
        
        int dragon_total = d_dsa + d_toc + d_dm;
        int sloth_total = s_dsa + s_toc + s_dm;
        
        if (dragon_total > sloth_total) {
            cout << "Dragon" << endl;
        } else if (sloth_total > dragon_total) {
            cout << "Sloth" << endl;
        } else {
            if (d_dsa > s_dsa) {
                cout << "Dragon" << endl;
            } else if (s_dsa > d_dsa) {
                cout << "Sloth" << endl;
            } else {
                if (d_toc > s_toc) {
                    cout << "Dragon" << endl;
                } else if (s_toc > d_toc) {
                    cout << "Sloth" << endl;
                } else {
                    cout << "Tie" << endl;
                }
            }
        }
    }
    
    return 0;
}

