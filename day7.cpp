// day9: 字符串练习
// 题目1：判断回文
// 题目2：提取字符串里的所有数字字符拼成整数

#include <iostream>
#include <string>
using namespace std;

// 判断字符串是不是回文
bool isPalindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

// 提取字符串中所有数字字符，拼成一个整数
long long extractNumber(const string& s) {
    long long num = 0;
    int n = (int)s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
        }
    }
    return num;
}

// ========== 测试入口 ==========
int main() {
   
    cout << isPalindrome("abcba") << endl;    // 1
    cout << isPalindrome("abccba") << endl;   // 1
    cout << isPalindrome("hello") << endl;    // 0
    cout << isPalindrome("a") << endl;        // 1
    cout << isPalindrome("") << endl;         // 1（空串算回文）

   
    cout << extractNumber("abc123def45") << endl;  // 12345
    cout << extractNumber("no number") << endl;    // 0
    cout << extractNumber("a1b2c3") << endl;       // 123

    return 0;
}
