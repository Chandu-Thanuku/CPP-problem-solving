#include <iostream>
#include <vector>
using namespace std;

void printFactorial(int n) {
    vector<int> res = {1};
    for (int i = 2; i <= n; ++i) {
        int carry = 0;
        for (int &d : res) {
            int prod = d * i + carry;
            d = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (int i = res.size() - 1; i >= 0; --i) cout << res[i];
    cout << '\n';
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        printFactorial(n);
    }
    return 0;
}
