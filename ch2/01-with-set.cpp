// https://judge.tcirc.tw/ShowProblem?problemid=d010

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

set<int> data;

void reader() {
  int cnt;
  cin >> cnt;
  while (cnt--) {
    int in;
    cin >> in;
    data.insert(in);
  }
}

void solver() {
  cout << data.size() << endl;
  for (int i : data) {
    cout << i << ' ';
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  solver();

  return 0;
}
