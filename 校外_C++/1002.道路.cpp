#include <iostream>
#include<algorithm>
using namespace std;
bool cmpGreater(int a, int b) {
    return a < b;
}
void solve_1002() {
    int t, n;
    const int maxn = 1000;
    int a[maxn] = {0};//道路长度
    cin >> t;
    for (int i = 0; i < t; ++i) {//t组数据
        cin >> n;//城市个数
        int k=0,result=0;
        for (int j = 0; j < n - 1; ++j) {//n个城市 n-1次联通
            cin >> k;//当前城市与下一城市有k条路径
            for (int i = 0; i < k; ++i) cin >> a[i];
            sort(a, a + k, cmpGreater);//升序
            result += a[0] + a[1];//取最短的两条路径
        }
        cout << result << endl;
    }

}
int main()
{
    solve_1002();
    return 0;
}
