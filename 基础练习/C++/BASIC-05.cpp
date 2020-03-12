/*
        @作者:        cloudYun
        @文件:        BASIC-5
        @时间:        2020/3/12 11:08
        @描述:        查找整数
        @编译器:      Clion
*/

#include <iostream>
#include <cstring>

using namespace std;

int n;
int num[1005];
int temp;
int pos = -1;

int main() {
    memset(num, 0, sizeof(num));

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> num[i];
    cin >> temp;

    for (int i = 1; i <= n; i++) {
        if (num[i] == temp) {
            pos = i;
            break;
        }
    }

    cout << pos << endl;

    return 0;
}