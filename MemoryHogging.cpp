#include <iostream>
#include <vector>
int main() { 
  while(true){
  size_t allocationSize = 10000000;  
  while (true) {
    try {
      std::vector<std::vector<int>> nestedVectors(allocationSize, std::vector<int>(allocationSize));
    } catch (const std::bad_alloc& e) {
      std::cerr << "Memory allocation failed: " << e.what() << std::endl; 
    }
    allocationSize *= 4;
    }
  }
  return 0;
}

