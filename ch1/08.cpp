// https://judge.tcirc.tw/ShowProblem?problemid=d007

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

int cnt, target;
vi numbers;
int sum = 0;

void reader() {
  cin >> cnt >> target;
  for (int i = 0; i < cnt; i++) {
    int in;
    cin >> in;
    numbers.pb(in);
  }
}

void solver(int idx = 0, int currentSum = 0) {
  if (currentSum > target) {
    return;
  } else if (idx == cnt) {
    if (currentSum < target) {
      sum = max(sum, currentSum);
    }
    return;
  }

  // take idx
  solver(idx + 1, currentSum + numbers[idx]);

  // dont take idx
  solver(idx + 1, currentSum);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  solver();

  cout << sum << endl;

  return 0;
}
