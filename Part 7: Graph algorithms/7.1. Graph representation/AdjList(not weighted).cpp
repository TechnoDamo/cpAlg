#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int node, n;
    cout << "n: ";
    cin >> n;
    vector<int> v;
    vector<vector<int>> adj(n, v);
    for(int i = 0; i < n; i++)
    {
        cout << "adjacent to node " << i << ": ";
        cin >> node;
        while(node>=0)
        {
            if(node>=n){cout << "Wrong node!!!"; return 0;}
            if(binary_search(adj[i].begin(), adj[i].end(), node)>0){cin >> node; continue;}
            adj[i].push_back(node);
            cin >> node;
        }
        sort(adj[i].begin(), adj[i].end());
        //cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "node " << i << " is adjacent to: ";
        for(auto u: adj[i])
        {
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}

