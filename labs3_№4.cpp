#include <iostream>
#include<algorithm>
#include<vector>

void print( size_t n){
  std::cout << "Size: " << n;
}
void print(std::vector<int> vec){//- вывести сам вектор.
  int temp = 0;
  std::cout << "Vector:" << std::endl;
  for ( size_t i = 0; i < vec.size(); ++i ){
    std::cout << "Value " << '"' << vec[i] << '"'<< " at index " << i << std::endl;
  }
} 
int main() {
    size_t n; std::cin >> n;
    std::vector<int> v(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    print(n);
    std::cout << std::endl;
    print(v);
}