#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split(const string &input , string delimiter){
    vector <string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while(end != string::npos){
        result.push_back(input.substr(start,end-start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}


int main()
{   
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string str = "apple, banana, orange, grape";
    vector<string> fruits = split(str,", ");
    for(const string& fruit : fruits){
        cout << fruit << " ";
    }
    
    
    return 0;
}
