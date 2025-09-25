#include <iostream>
using namespace std;

int countLoneZeroes(int N) {
    string s = to_string(N);
    int count = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '0') {
            bool leftZero = (i > 0 && s[i - 1] == '0');
            bool rightZero = (i < (int)s.size() - 1 && s[i + 1] == '0');
            if (!leftZero && !rightZero) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    cout << countLoneZeroes(N) << endl;
    return 0;
}
