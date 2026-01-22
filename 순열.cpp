#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{   
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<int> a = {2, 1, 3};
    sort(a.begin(), a.end());             // 먼저 오름차순 정렬
    do{
        for(int i : a) cout << i << " ";
        cout << '\n';
    }while(next_permutation(a.begin(), a.end()));
    return 0;
}
