// https://judge.tcirc.tw/ShowProblem?problemid=d003

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
typedef long long LL;
typedef vector<int> vi;

int stickLen, markCnt;
vi marks;

void reader() {
  cin >> markCnt >> stickLen;

  marks.pb(0);
  for (int i = 0; i < markCnt; i++) {
    int in;
    cin >> in;
    marks.pb(in);
  }
  marks.pb(stickLen);
}

LL cut(int left, int right) {
  double middle = (double)(left + right) / 2;
  auto it = upper_bound(marks.begin(), marks.end(), middle);
  int leftClosestMark = *(it - 1), rightClosestMark = *it;

  int targetMark;
  if (leftClosestMark <= left) {
    if (rightClosestMark >= right) return 0;
    targetMark = rightClosestMark;
  } else if (rightClosestMark >= right) {
    if (leftClosestMark <= left) return 0;
    targetMark = leftClosestMark;
  } else {
    if ((double)rightClosestMark - middle < middle - (double)leftClosestMark) {
      targetMark = rightClosestMark;
    } else {
      targetMark = leftClosestMark;
    }
  }

  return right - left + cut(left, targetMark) + cut(targetMark, right);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  cout << cut(0, stickLen) << endl;

  return 0;
}
