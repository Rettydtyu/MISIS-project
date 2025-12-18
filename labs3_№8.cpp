#include <iostream>
#include<algorithm>
#include<vector>
void swap_max_min(std::vector<int> &vec){
  std::iter_swap( std::min_element(vec.begin(), vec.end()), std::max_element(vec.begin(), vec.end()));
}

const long long inf = 2e18;

int main() {
  std::vector<int> v;
  int a;
  while(std::cin >> a) v.push_back(a);
  swap_max_min(v);
  for (int el : v)
    std::cout << el << ' ';
}