#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  cout << "### STL Sort Example ###" << endl;
  int a[] = {45, 32, 16, 11, 7, 18, 21, 16, 11, 15};
  cout << "BEFORE (static array example): ";
  for (int i = 0; i < 10; i++)
    cout << a[i] << " ";
  cout << endl;
  sort(a, a + 10);
  cout << "AFTER: ";
  for (int i = 0; i < 10; i++)
    cout << a[i] << " ";
  cout << endl;

  cout << "BEFORE (vector example): ";
  vector<int> va(a, a + 10);
  auto rng = std::default_random_engine{};
  shuffle(va.begin(), va.end(), rng);
  for (auto it = va.begin(); it < va.end(); it++)
    cout << *it << " ";
  cout << endl;
  sort(va.begin(), va.end());
  cout << "AFTER: ";
  for (auto it = va.begin(); it < va.end(); it++)
    cout << *it << " ";
  cout << endl;
  return 0;
}
