#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> nums(k);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  long long max_sum = 0;
  long long cur_sum = 0;

  for (int i = 0; i < k; i++) {
    cur_sum += nums[i];
  }

  max_sum = cur_sum;

  for (int i = 0; i < n - k; i++) {
    cur_sum = -nums[i] + cur_sum + nums[i + 1];
    max_sum = max(max_sum, cur_sum);
  }

  cout << max_sum;
}
