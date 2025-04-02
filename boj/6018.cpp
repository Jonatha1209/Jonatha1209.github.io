#include <bits/stdc++.h>

using namespace std;

int parent[1010101];
int m,n;

int Find(int x){
  if (parent[x]==x) return x;
  return parent[x]=Find(parent[x]);
}

void Union(int x, int y){
  x = Find(x);
  y = Find(y);
  parent[x]=y;
}

bool yes(int x, int y){
    return Find(x)==Find(y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=1;i<=1010101;i++){
        parent[i]=i;
    }
    int k;
    cin >> n >> m >> k;
    for (int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        Union(a,b);
    }
    for (int i=0;i<k;i++){
        int a,b;
        cin >> a >> b;
        if (yes(a,b)){
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}
