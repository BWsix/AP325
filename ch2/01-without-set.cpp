// https://judge.tcirc.tw/ShowProblem?problemid=d010

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

vi data;

void reader() {
  int cnt;
  cin >> cnt;
  while (cnt--) {
    int in;
    cin >> in;
    data.pb(in);
  }
}

void solver() {
  sort(data.begin(), data.end());

  vi answers;
  int currentMax = INT32_MIN;

  for (int i : data) {
    if (i > currentMax) {
      currentMax = i;
      answers.pb(i);
    }
  }

  cout << answers.size() << endl;
  for (int i : answers) {
    cout << i << ' ';
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  solver();

  return 0;
}
