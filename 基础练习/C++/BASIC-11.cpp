/*
        @作者:        cloudYun
        @文件:        BASIC-11
        @时间:        2020/3/12 13:22
        @描述:        十六进制转十进制
        @编译器:      Clion
*/

#include <iostream>
#include <cmath>

using namespace std;

string str;
long long Dec = 0;
int len;

int main() {
    cin >> str;
    len = str.length();

    for (int i = 0; i < len; i++) {
        int temp = 0;
        if (str[i] >= '0' && str[i] <= '9')
            temp = str[i] - '0';
        else
            temp = str[i] - 'A' + 10;
        Dec += temp * pow(16, len - i - 1);
    }

    cout << Dec << endl;

    return 0;
}