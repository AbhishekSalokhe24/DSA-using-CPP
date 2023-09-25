#include <iostream>
#include <vector>

using namespace std;

vector<char> CompressedString(vector<char> s) {
    int i = 0;
    int n = s.size();
    int count = 0;
    int ansIndex = 0;
    while (i < n) {
        int j = i + 1;

        while (j < n && s[i] == s[j]) {
            j++;
        }
        s[ansIndex] = s[i];
        count = j - i;
        if (count > 1) {
            string cnt = to_string(count);
            for (char ch : cnt) {
                s[++ansIndex] = ch;
            }
        }
        i = j;
        ansIndex++;
    }
    // Resize the vector to the compressed size and return it
    s.resize(ansIndex);
    return s;
}

int main() {
    vector<char> str;
    str.push_back('a');
    str.push_back('a');
    str.push_back('b');
    str.push_back('b');
    str.push_back('c');
    str.push_back('c');
    str.push_back('c');

    vector<char> compressedStr = CompressedString(str);
    cout<<"Compresed String : "<<endl;
    for (char ch : compressedStr) {
        cout << ch;
    }
    return 0;
}
