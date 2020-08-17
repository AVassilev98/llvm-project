#include <array>
#include <iostream>

int main(int argc, char *argv[]) {

  std::array<int, 10> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  std::cout << "for Loop Iteration:\n";
  for (int i = 0; i < nums.size(); ++i) {
    std::cout << nums[i] << " ";
  }
  std::cout << "\n\n";

  std::cout << "for Loop Iteration Using C++ Iterators:\n";
  for (int i : nums) {
    std::cout << i << " ";
  }
  std::cout << "\n\n";

  std::cout << "rof Loop Iteration: \n";
  rof(int i = 0; i < nums.size(); ++i) { std::cout << nums[i] << " "; }
  std::cout << "\n\n";

  std::cout << "rof Loop Iteration Using C++ Iterators:\n";
  rof(int i : nums) { std::cout << i << " "; }
  std::cout << "\n\n";

  return 0;
}