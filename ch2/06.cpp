// https://judge.tcirc.tw/ShowProblem?problemid=d015

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

int cntA, cntB, target;
set<int> A, B;
int answer = 0;

void reader() {
  cin >> cntA >> cntB >> target;
  for (int i = 0; i < cntA; i++) {
    int in;
    cin >> in;
    A.insert(in);
  }
  for (int i = 0; i < cntB; i++) {
    int in;
    cin >> in;
    B.insert(in);
  }
}

void solver() {
  for (int i : A) {
    int currentTarget = target - i;
    if (B.find(currentTarget) != B.end()) {
      answer++;
    }
  }

  cout << answer << endl;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  solver();

  return 0;
}
