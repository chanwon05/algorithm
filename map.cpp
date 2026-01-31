#include <map>
#include <iostream>
#include <vector>
using namespace std;

map<int,int> mp;

int main()
{   
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<int> v{1, 1, 2, 2, 3, 3};
    for(int i : v){
        if(mp[i]){
            continue;
        }else{
            mp[i] = 1;
        }
    }
    vector<int> ret;
    for(auto it : mp){
        ret.push_back(it.first);
    }
    for(int i : ret) cout << i << '\n';
    
    return 0;
}
