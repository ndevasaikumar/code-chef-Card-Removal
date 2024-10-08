#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        map<int,int> mp;
        for(int i = 0; i < n; i++)
            mp[a[i]]++;
        int res = 1000;
        map<int,int> :: iterator it = mp.begin();
        while(it != mp.end()){
            int d = n - (it -> second);
            res = min(res,d);
            it++;
        }
        cout << res << endl;
    }
}
