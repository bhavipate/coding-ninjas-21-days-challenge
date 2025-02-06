#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 1 || n== 2) {
        cout << 1 << endl;
        return 0;
    }
    long long p1 = 1, p2 = 1, A;
    for (int i = 3; i <= n; i++) {
        A = p1 + p2;
        p2 = p1;
        p1 = A;
    }
    cout << A << endl;
    return 0;
}
