// https://judge.tcirc.tw/ShowProblem?problemid=d011

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

struct Pair {
  int idx;
  int value;
  int weight;
};
int cnt;
vector<Pair> data;

void reader() {
  cin >> cnt;
  for (int i = 0; i < cnt; i++) {
    Pair p;
    cin >> p.value;
    p.idx = i;
    data.pb(p);
  }
}

bool comp_value(Pair a, Pair b) { return a.value < b.value; }
bool comp_idx(Pair a, Pair b) { return a.idx < b.idx; }

void solver() {
  sort(data.begin(), data.end(), comp_value);

  int currentMax = INT32_MIN, value = -1;
  for (auto &elem : data) {
    if (elem.value > currentMax) {
      currentMax = elem.value;
      value++;
    }
    elem.weight = value;
  }

  sort(data.begin(), data.end(), comp_idx);

  for (auto elem : data) {
    cout << elem.weight << ' ';
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  solver();

  return 0;
}
