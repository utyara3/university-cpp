#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long sum_best = 0;
    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += A[i];
    }

    sum_best = sum;

    for (int i = 0; i < n - k; i++) {
        sum = sum + A[k + i] - A[i];
        sum_best = max(sum_best, sum);
    }

    cout << sum_best;
}
