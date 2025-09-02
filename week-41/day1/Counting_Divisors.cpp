#include <iostream>
#include <vector>
using namespace std;
const int N = 1000000;
int main() {
    vector<int> count(N + 1);
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            count[j]++;
        }
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cout << count[x] << "\n";
    }
}