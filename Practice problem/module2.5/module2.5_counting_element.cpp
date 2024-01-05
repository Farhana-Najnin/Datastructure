#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); //O(nlogn)--is the highest complexity
    int cnt = 0;
    // O(N*N)
    for (int i = 0; i < n ; i++) // 0 1 2 3 4 5 O(N)
    {
        for (int j = i + 1; j < n;j++){
            if(v[i]+1 == v[j]){
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
