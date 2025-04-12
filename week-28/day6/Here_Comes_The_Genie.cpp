#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int maxBallsCollected(int n, vector<int>& balls) {
    sort(balls.rbegin(), balls.rend()); // Sort in descending order
    set<int> collected; // To keep track of unique counts
    int total = 0;

    for (int b : balls) {
        while (b > 0 && collected.find(b) != collected.end()) {
            b--; // Decrease until we find a unique count
        }
        if (b > 0) {
            collected.insert(b);
            total += b;
        }
    }

    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> balls(n);
    
    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    cout << maxBallsCollected(n, balls) << endl;
    return 0;
}
