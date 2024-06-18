#include <iostream>
#include <vector>
using namespace std;
int count(vector<int>& m) {
    int Counts[6] = { 0 };
    int total = 0;

    for (int s : m) {
        while (s >= 100) {
            s -= 100;
            Counts[0]++;
        }
        while (s >= 50) {
            s -= 50;
            Counts[1]++;
        }
        while (s >= 10) {
            s -= 10;
            Counts[2]++;
        }
        while (s >= 5) {
            s -= 5;
            Counts[3]++;
        }
        while (s >= 2) {
            s -= 2;
            Counts[4]++;
        }
        while (s >= 1) {
            s -= 1;
            Counts[5]++;
        }
    }

    for (int count : Counts) {
        total += count;
    }

    return total;
}
int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> m(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }
        int bills = count(m);
        cout << bills << endl;
    }
    return 0;
}