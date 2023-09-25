#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> PairSum(vector<int> &a, int s) {
    int n = a.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            vector<int> temp;
            if (a[i] + a[j] == s) {
                temp.push_back(min(a[i], a[j]));
                temp.push_back(max(a[i], a[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);

    int target = 0;
    cout<<"Enter Target:"<<endl;
    cin>>target;

    vector<vector<int>> ans = PairSum(s, target);
    for (auto i : ans) { // Changed "int i" to "auto i" to correctly iterate over vectors inside the vector.
        for (auto j : i) { // Nested loop to print the elements of each vector inside the vector.
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
