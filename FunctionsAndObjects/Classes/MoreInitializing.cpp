#include "MoreInitializing.h"

int main() {
  int x;                            // junk
  int y{};                          // 0
  int z{4};                         // 4
  MoreInitializing uninitialized;   // junk
  MoreInitializing value{};         // 0, 0
  MoreInitializing aggregate{2, 4}; // 2, 4
  value.m_height = 2;
  value.m_width = 4;
  return 0;
}