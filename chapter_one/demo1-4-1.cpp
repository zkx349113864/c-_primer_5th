#include <iostream>
int main()
{
  int sum = 0, val = 1;
  // 只要val的值小于10，while就会继续执行
  while (val <= 10) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  system("pause");
  return 0;
}