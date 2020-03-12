/*
        @作者:        cloudYun
        @文件:        BASIC-7
        @时间:        2020/3/12 11:31
        @描述:        特殊的数字
        @编译器:      Clion
*/

#include <iostream>
#include <cmath>

using namespace std;

int i, j, k;  //循环变量

int main() {
    for (i = 1; i < 10; i++)
        for (j = 0; j < 10; j++)
            for (k = 0; k < 10; k++)
                if (pow(i, 3) + pow(j, 3) + pow(k, 3) == 100 * i + 10 * j + k)
                    cout << i << j << k << endl;

    return 0;
}