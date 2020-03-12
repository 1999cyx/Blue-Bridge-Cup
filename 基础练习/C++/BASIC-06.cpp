/*
        @作者:        cloudYun
        @文件:        BASIC-6
        @时间:        2020/3/12 11:21
        @描述:        杨辉三角形
        @编译器:      Clion
*/

#include <iostream>
#include <cstring>

using namespace std;

int n;
int yanghui[40][40];

int main() {
    memset(yanghui, 0, sizeof(yanghui));
    yanghui[1][1] = yanghui[2][1] = yanghui[2][2] = 1;

    cin >> n;

    for (int i = 3; i <= n; i++)
        for (int j = 1; j <= i; j++)
            yanghui[i][j] = yanghui[i - 1][j] + yanghui[i - 1][j - 1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << yanghui[i][j];
            if (j != n)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}