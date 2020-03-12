/*
        @作者:        cloudYun
        @文件:        BASIC-10
        @时间:        2020/3/12 13:12
        @描述:        十进制转十六进制
        @编译器:      Clion
*/

#include <iostream>
#include <stack>

using namespace std;

stack<char> HEX;
char HEXch[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int a;

int main() {
    cin >> a;

    if (a == 0)
        HEX.push('0');

    while (a) {
        HEX.push(HEXch[a % 16]);
        a /= 16;
    }

    while (!HEX.empty()) {
        cout << HEX.top();
        HEX.pop();
    }
    cout << endl;

    return 0;
}