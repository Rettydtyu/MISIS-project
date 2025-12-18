#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
void print(std::vector<int> &numbers, int k){
  std::vector<int> temp;
  for ( int i = 0; i < numbers.size(); i++ )
  {
    if ( i % k == 0)
    {
      std::cout << numbers[i] << " ";
    }
    else temp.push_back(numbers[i]);
  }
  numbers = temp;
  std::cout << std::endl;
}
 
using std::string;
using std::cin;
using std::cout;
using std::vector;

int main() {
  int n; cin >> n;
  vector<int> num(n);
  for (int & el : num) cin >> el;
  int q, k; cin >> q;
  while(q--) {
    cin >> k;
    print(num, k);
  }
}
