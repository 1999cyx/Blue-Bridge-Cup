/*
        @作者:        cloudYun
        @文件:        ALGO-2
        @时间:        2020/3/10 9:52
        @描述:        最大最小公倍数
*/

#include <iostream>

using namespace std;

long long N;        //从1~N中任选出三个数
long long lcm;      //最小公倍数的最大值

int main() {
    cin>>N;

    if(N%2 == 1)    //奇-偶-奇
        lcm = N*(N-1)*(N-2);
    else if(N%3 != 0)   //偶-奇-偶：并且N不是3的倍数
        lcm = N*(N-1)*(N-3);
    else                //偶-奇-偶：并且N是3的倍数
        lcm = (N-1)*(N-2)*(N-3);

    cout<<lcm<<endl;

    return 0;
}