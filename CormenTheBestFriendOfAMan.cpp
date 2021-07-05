#include <iostream>
int main()
{
     int n, k, count = 0, _2day;
     std::cin >> n >> k;
     int a[n];
     std::cin >> a[0];
     for (int i = 1; i < n; i++) {
          std::cin >> a[i];
          _2day = a[i] + a[i - 1];
          if(_2day < k){
               count += k - _2day;
               a[i] += k - _2day;
          }
     }
     std::cout << count << '\n';
     for (int i = 0; i < n; i++)
          std::cout << a[i] << ' ';
     std::cout << '\n';
     return 0;
}
