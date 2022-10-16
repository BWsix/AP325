// https://judge.tcirc.tw/ShowProblem?problemid=d005

#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
typedef vector<int> vi;
#define pb push_back

queue<char> data;
int imageSize;
int blackPixelCounter = 0;

void reader() {
  string in;
  cin >> in;
  for (char chr : in) {
    data.push(chr);
  }

  cin >> imageSize;
}

void counter(int depth = 0) {
  char code = data.front();
  data.pop();

  if (code == '2') {
    for (int i = 0; i < 4; i++) counter(depth + 1);
  } else if (code == '1') {
    blackPixelCounter += pow(imageSize / pow(2, depth), 2);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  reader();
  counter();

  cout << blackPixelCounter << endl;

  return 0;
}
