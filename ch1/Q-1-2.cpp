// https://judge.tcirc.tw/ShowProblem?problemid=d002

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
typedef long long LL;

int f(int x) { return x * 2 - 3; }
int g(int x, int y) { return x * 2 + y - 7; }
int h(int x, int y, int z) { return x * 3 - y * 2 + z; }

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
  } else if (input[0] == 'h') {
    int x = read();
    int y = read();
    int z = read();
    return h(x, y, z);
  } else {
    return stoi(input);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  LL a = read();
  cout << a << "\n";

  return 0;
}
