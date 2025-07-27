// Problem Statement
// Given 
// N
// N 2D points you have to find out the maximum Euclidean distance between two different points.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }
    long long maxDistanceSquared = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long dx = points[i].first - points[j].first;
            long long dy = points[i].second - points[j].second;
            long long distanceSquared = dx * dx + dy * dy;

            if (distanceSquared > maxDistanceSquared) {
                maxDistanceSquared = distanceSquared;
            }
        }
    }

    cout << maxDistanceSquared << endl;

    return 0;
}
