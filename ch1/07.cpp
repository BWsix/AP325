// https://judge.tcirc.tw/ShowProblem?problemid=d006

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

int cnt;
vi numbers;
int sum = 0;
int PRIME = 10009;

void reader() {
  cin >> cnt;
  for (int i = 0; i < cnt; i++) {
    int in;
    cin >> in;
    numbers.pb(in);
  }
}

void solver(int idx = 0, int remainder = 1) {
  if (idx == cnt) {
    if (remainder == 1) sum++;
    return;
  }

  // take idx
  solver(idx + 1, remainder * numbers[idx] % PRIME);

  // dont take idx
  solver(idx + 1, remainder);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  solver();

  cout << sum - 1 << endl;

  return 0;
}
