/*
        @作者:        cloudYun
        @文件:        BASIC-13
        @时间:        2020/3/12 13:58
        @描述:        数列排序
        @编译器:      Clion
*/

#include <iostream>

using namespace std;

int n;
int num[205];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];

    for (int i = 0; i < n; i++) {
        int pos = i;
        int Min = num[i];
        //找到第i小的数的下标
        for (int j = i; j < n; j++) {
            if (Min > num[j]) {
                pos = j;
                Min = num[j];
            }
        }
        //交换
        if (pos != i)
            swap(num[i],num[pos]);
    }

    for (int i = 0; i < n; i++)
        cout << num[i] << " ";
    cout << endl;

    return 0;
}