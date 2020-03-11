/*
        @作者:        cloudYun
        @文件:        ALGO-3
        @时间:        2020/3/10 10:13
        @描述:        K好数
*/

#include <iostream>
#include <cstring>

using namespace std;

#define mod 1000000007

int K,L;            //L位K进制数
int dp[101][101];   //存储L位K进制数的所有数
long long sum = 0;  //k好数个数
int i,j,k;          //循环变量

int main() {
    cin>>K>>L;
    memset(dp,0, sizeof(dp));

    for (i = 0; i < K; i++)   //第1行初始化为1，便于下面for循环i=2时的计算
        dp[1][i] = 1;

    for (i = 2; i <= L; i++)
        for (j = 0; j < K; j++)
            for (k = 0; k < K; k++)
                if (k != j-1 && k!= j+1)  //左右不相邻
                {
                    dp[i][j] += dp[i-1][k];
                    dp[i][j] %= mod;
                }

    for(i=1;i<K;i++)
    {
        sum += dp[L][i];
        sum %= mod;
    }

    cout<<sum<<endl;

    return 0;
}