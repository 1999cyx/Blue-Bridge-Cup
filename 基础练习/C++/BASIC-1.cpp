/*
        @作者:        cloudYun
        @文件:        BASIC-1
        @时间:        2020/3/11 15:37
        @描述:        闰年判断
        @编译器:      Clion
*/

#include <iostream>

using namespace std;

int year;

bool isLeapYear(int y) {
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int main() {
    cin >> year;
    if (isLeapYear(year))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}