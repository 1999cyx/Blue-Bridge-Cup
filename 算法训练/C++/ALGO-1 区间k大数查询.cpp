/*
        @作者:        cloudYun
        @文件:        ALGO-1
        @时间:        2020/3/10 8:27
        @描述:        区间k大数查询
*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int arr[1001];      //存储给定的序列
int num[1001];      //存储询问的序列
int n;              //序列长度
int m;              //询问个数
int l,r,K;          //询问序列从左往右第l个数到第r个数中，从大往小第K大的数
int i,j,k;          //循环变量

bool cmp(int a,int b)
{
    return a<b;
}

int main() {
    memset(arr,0, sizeof(arr));
    //输入序列
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];

    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>l>>r>>K;
        memset(num,0, sizeof(num));
        for(j=l,k=1;j<=r;j++,k++)
            num[k] = arr[j];
        sort(num,num+k,cmp);
        cout<<num[k-K]<<endl;
    }

    return 0;
}