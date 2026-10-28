/*
样例输入1
Igopt]vzun
样例输出1
HelloWorld
*/

/*
样例输入2
BDF
样例输出2
ABC
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i) {
        s[i] = s[i] - (i + 1);
    }
    cout << s;
    return 0;
}