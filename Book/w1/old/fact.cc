// fact.cc
#include "Chapter6.h"

int fact(int n) {
    if (n <= 1) return 1; // 階乘的遞歸基礎情況
    return n * fact(n - 1); // 遞歸計算階乘
}
