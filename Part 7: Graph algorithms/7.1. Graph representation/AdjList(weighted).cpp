#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int node, n, w;
    cout << "n: ";
    cin >> n;
    vector<pair<int, int>> v;
    vector<vector<pair<int, int>>> adj(n, v);
    for(int i = 0; i < n; i++)
    {
        cout << "adjacent to node " << i << "(node and weight of edge): ";
        cin >> node >> w;
        while(node>=0)
        {
            //if(node>=n){cout << "Wrong node!!!"; return 0;}
            //if(binary_search((adj[i]).begin(), adj[i].end(), node)>0){cin >> node; cout << i << " to " << node << "weight: "; cin >> w; continue;}
            adj[i].push_back({node, w});
            cout << "node and weight of edge: ";
            cin >> node >> w;
        }
        sort(adj[i].begin(), adj[i].end());
        //cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "node " << i << " is adjacent to: " << endl;
        for(auto u: adj[i])
        {
            cout << u.first << " with weight = " << u.second << endl;
        }
        cout << endl;
    }
    return 0;
}

