/*
        @作者:        cloudYun
        @文件:        BASIC-9
        @时间:        2020/3/12 11:43
        @描述:        特殊回文数
        @编译器:      Clion
*/

#include <iostream>
#include <cmath>

int sum;            //各位数字之和
int num[2][2005];   //num[0][i]存储回文数，num[1][i]存储回文数各位数字之和
int i, j, k, l;        //循环变量

using namespace std;

int main() {
    cin >> sum;

    //5位回文数
    for (l = 0, i = 1; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                num[0][l] = 10000 * i + 1000 * j + 100 * k + 10 * j + i;
                num[1][l] = 2 * i + 2 * j + k;
                l++;
            }
        }
    }
    //6位回文数
    for (i = 1; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                num[0][l] = 100000 * i + 10000 * j + 1000 * k + 100 * k + 10 * j + i;
                num[1][l] = 2 * i + 2 * j + 2 * k;
                l++;
            }
        }
    }

    for (i = 0; i < l; i++) {
        if (num[1][i] == sum)
            cout << num[0][i] << endl;
    }

    return 0;
}