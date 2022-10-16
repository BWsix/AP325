// https://judge.tcirc.tw/ShowProblem?problemid=d012

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

LL x, y, z;

void reader() { cin >> x >> y >> z; }

LL solver(int power) {
  if (power == 0) return 1;
  if (power % 2 == 1) return (solver(power - 1) * x) % z;

  LL result = solver(power / 2);
  return (result * result) % z;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  cout << solver(y);

  return 0;
}
