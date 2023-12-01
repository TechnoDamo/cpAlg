#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<tuple<int, int, int>> v;
    int n1, n2, w;
    while(n1>=0||n2>=0)
    {
        cin >> n1 >> n1 >> w;
        v.push_back({n1, n2, w});
    }
    return 0;
}