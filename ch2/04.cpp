// https://judge.tcirc.tw/ShowProblem?problemid=d013

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

string input;
LL x, y, z;

void reader() {
  cin >> input >> y >> z;

  vi integer;
  for (char i : input) {
    integer.pb(i - '0');
  }

  x = integer.front();
  for (int i = 1; i < integer.size(); i++) {
    x = (x * 10 + integer.at(i)) % z;
  }
}

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
