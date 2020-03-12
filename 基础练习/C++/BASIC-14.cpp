/*
        @作者:        cloudYun
        @文件:        BASIC-14
        @时间:        2020/3/12 14:36
        @描述:        时间转换
        @编译器:      Clion
*/

#include <iostream>

using namespace std;

int t;
int H, M, S;

int main() {
    cin >> t;

    S = t % 60;
    t /= 60;
    M = t % 60;
    t /= 60;
    H = t % 60;

    cout << H << ":" << M << ":" << S << endl;

    return 0;
}