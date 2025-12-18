#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

long long Area(long long x1, long long y1, long long x2, long long y2){
  long long temp = abs( x1 - x2 ) * abs( y1 - y2 );
  return temp;
}
double Area(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3){
  double temp = abs ( 0.5 * ( x1 * ( y2 - y3 ) + x2 * ( y3 - y1 ) + x3 * ( y1 - y2 )));
  return temp;
}
int main() {
    long long x1, x2, x3, y1, y2, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    std::cout << "Square area: " << Area(x1, y1, x2, y2) << '\n';
    std::cout << std::fixed << std::setprecision(6) << "Triangle area: " << Area(x1, y1, x2, y2, x3, y3) << '\n';
}