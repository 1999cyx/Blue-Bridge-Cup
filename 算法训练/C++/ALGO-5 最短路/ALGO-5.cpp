/*
        @作者:        cloudYun
        @文件:        ALGO
        @时间:        2020/3/11 15:09
        @描述:        最短路
        @编译器:      Clion
*/

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

//e[i].to,e[i].val,e[i].next分别表示第i条边的终点，权值，和另（上）一条于此边相同起点的边的编号
struct edge {
    int to, val, next;
};

int m, n;
edge e[200005];
int head[20005], dis[20005];    //head[i]表示当前以i为起点的边的编号，dis[i]表示1号点到i号点的距离
int from, val, to;              //输入边的信息
int len = 1;

//添加边，参数分别代表此边的起点，终点，权值，还有此边的编号
void add(int f, int t, int v, int l) {
    e[l].to = t;
    e[l].val = v;
    e[l].next = head[f];//此边的起点是from，而head[from]保存上一条起点是from的边的编号
    head[from] = l;//添加了这条边后，现在，最新的以from为起点的边编号就是len
}

void spfa() {
    int s;
    queue<int> q;
    int visit[20005];
    memset(visit, 0, sizeof(visit));//初始没有点在队列中

    for (int i = 1; i <= n; i++)
        dis[i] = 999999;

    dis[1] = 0;
    q.push(1);
    visit[1] = 1;//现在把第一个点扔进队列
    while (!q.empty()) {    //如果队列不空则重复执行以下操作
        int t = q.front();
        q.pop();
        visit[t] = 0;   //t现在不在队列里

        for (int i = head[t]; i != -1; i = e[i].next) {
            s = e[i].to;//s为所枚举的边的终点
            if (dis[s] > dis[t] + e[i].val) {
                dis[s] = dis[t] + e[i].val;
                if (visit[s] == 0) {
                    q.push(s);
                    visit[s] = 1;
                }
            }
        }
    }

}

int main() {
    cin >> n >> m;

    memset(head, -1, sizeof(head));

    for (int i = 0; i < m; i++) {
        cin >> from >> to >> val;
        add(from, to, val, len);
        len++;
    }
    spfa();

    for (int i = 2; i <= n; i++)
        cout << dis[i] << endl;

    return 0;
}