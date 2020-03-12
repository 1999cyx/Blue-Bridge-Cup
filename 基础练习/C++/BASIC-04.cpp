/*
        @作者:        cloudYun
        @文件:        BASIC-4
        @时间:        2020/3/12 11:03
        @描述:        数列特征
        @编译器:      Clion
*/

#include <iostream>
#include <cstring>

using namespace std;

int n;          //数组中数的个数。
int num[10005];
int MAX = -10005, MIN = 10005, SUM = 0;

int main() {
    memset(num, 0, sizeof(num));

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        MAX = MAX > num[i] ? MAX : num[i];
        MIN = MIN < num[i] ? MIN : num[i];
        SUM += num[i];
    }

    cout << MAX << endl << MIN << endl << SUM << endl;

    return 0;
}