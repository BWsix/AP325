// https://judge.tcirc.tw/ShowProblem?problemid=d001

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
typedef long long LL;

int f(int x) { return x * 2 - 1; }
int g(int x, int y) { return x + y * 2 - 3; }

int read() {
  string input;
  cin >> input;

  if (input[0] == 'f') {
    int x = read();
    return f(x);
  } else if (input[0] == 'g') {
    int x = read();
    int y = read();
    return g(x, y);
  } else {
    return stoi(input);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int a = read();
  cout << a << "\n";

  return 0;
}
