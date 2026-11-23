// day7: 函数练习
// 题目1：进制转换（含 toChar 映射）
// 题目2：字符大小写互换

#include <iostream>
using namespace std;

// 把一位数字变成对应的字符：0~9 → '0'~'9'，10~15 → 'A'~'F'
char toChar(int d) {
    return "0123456789ABCDEF"[d];
}

// 把十进制 n 转成 base 进制并输出
void printInBase(int n, int base) {
    if (n == 0) {                 // 特殊情况：0 也要输出
        cout << 0 << endl;
        return;
    }
    int a[100];
    int cnt = 0;
    while (n > 0) {
        a[cnt++] = n % base;
        n /= base;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        cout << toChar(a[i]);
    }
    cout << endl;
}

// 单个字符的大小写互换
char swapCase(char c) {
    if (c >= 'a' && c <= 'z') return c - 'a' + 'A';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 'a';
    return c;
}

// ========== 测试入口 ==========
int main() {
    cout << "===== 测试1：进制转换 =====" << endl;
    printInBase(1234, 2);    // 期望 10011010010
    printInBase(255, 16);    // 期望 FF
    printInBase(0, 8);       // 期望 0
    printInBase(10, 2);      // 期望 1010

    cout << "===== 测试2：大小写互换 =====" << endl;
    cout << swapCase('a') << endl;   // 期望 A
    cout << swapCase('Z') << endl;   // 期望 z
    cout << swapCase('5') << endl;   // 期望 5

    return 0;
}

