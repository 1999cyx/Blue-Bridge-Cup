/*
        @作者:        cloudYun
        @文件:        BASIC-3
        @时间:        2020/3/11 15:54
        @描述:        字母图形
        @编译器:      Clion
*/

#include <iostream>
#include <cmath>

using namespace std;

int n, m;        //n行，m列

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << char('A' + abs(i - j));
        cout << endl;
    }

    return 0;
}