#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n = 5;
int k = 3;

void print(vector<int> b){
    for(int i : b) cout << i << " ";
    cout << '\n';
}
void combi(int start, vector<int> b){
    if(b.size() == k){
        print(b);
        return;
    }
    for(int i = start + 1; i < n; i++){
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
    return;
}
int main()
{   
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<int> b;
    combi(-1,b);
    return 0;
}
