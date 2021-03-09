#include <iostream>
int main() {
     int n, a, b, min = 0, count = 0;
     std::cin >> n;
     while (n--) {
          std::cin >> a >> b;
          count -= a;
          count += b;
          if (count > min)
               min = count;
     }
     std::cout << min << '\n';
     return 0;
}
