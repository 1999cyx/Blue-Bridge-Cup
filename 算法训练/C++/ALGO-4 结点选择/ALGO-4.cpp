/*
        @作者:        cloudYun
        @文件:        ALGO-4
        @时间:        2020/3/11 14:26
        @描述:        结点选择
        @编译器:      Clion
*/

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int n;              //n个节点的树
int a, b;            //描述树上的一条边
int dp[100005][2];  //dp[i][1]存储结点权值
vector<vector<int> > tree;

void dfs(int x, int pre) {
    int temp;
    for (int i = 0; i < tree[x].size(); i++) {
        temp = tree[x][i];
        if (temp != pre) {
            dfs(temp, x);
            dp[x][0] += max(dp[temp][0], dp[temp][1]);
            dp[x][1] += dp[temp][0];
        }
    }
}

int main() {
    cin >> n;
    memset(dp, 0, sizeof(dp));
    tree.resize(n + 1);
    //输入权值
    for (int i = 1; i <= n; i++)
        cin >> dp[i][1];
    //输入边
    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(1, 0);
    cout << max(dp[1][0], dp[1][1]) << endl;

    return 0;
}