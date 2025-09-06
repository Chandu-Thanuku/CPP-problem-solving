#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int R, C;
        cin >> R >> C;
        vector<string> matrix(R);

  
        for (int i = 0; i < R; i++) {
            cin >> matrix[i];
            transform(matrix[i].begin(), matrix[i].end(), matrix[i].begin(), ::tolower);
        }

        bool found = false;

      
        for (int i = 0; i < R && !found; i++) {
            if (matrix[i].find("spoon") != string::npos) {
                found = true;
            }
        }

       
        for (int col = 0; col < C && !found; col++) {
            string colStr = "";
            for (int row = 0; row < R; row++) {
                colStr += matrix[row][col];
            }
            if (colStr.find("spoon") != string::npos) {
                found = true;
            }
        }

        if (found)
            cout << "There is a spoon!" << endl;
        else
            cout << "There is indeed no spoon!" << endl;
    }
    return 0;
}
