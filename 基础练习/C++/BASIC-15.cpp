/*
        @作者:        cloudYun
        @文件:        BASIC
        @时间:        2020/3/12 14:50
        @描述:        
        @编译器:      Clion
*/

#include <iostream>

using namespace std;

string str1, str2;
int len1, len2;

int main() {
    cin >> str1;
    cin >> str2;
    len1 = str1.length();
    len2 = str2.length();

    if (len1 != len2)
        cout << "1" << endl;
    else if (str1 == str2)
        cout << "2" << endl;
    else {
        for (int i = 0; i < len1; i++) {
            if (str1[i] >= 'A' && str1[i] <= 'Z')
                str1[i] += 32;
            if (str2[i] >= 'A' && str2[i] <= 'Z')
                str2[i] += 32;
        }
        if (str1 == str2)
            cout << "3" << endl;
        else
            cout << "4" << endl;
    }

    return 0;
}