#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum, n;
vector<int> x(1000), input(1000);

void ss(int s, int k, int r) {
    x[k] = 1;

    if (s + input[k] == sum) {
        cout << endl << "Subset: ";
        for (int i = 1; i <= n; i++) {
            if (x[i] == 1) {
                cout << input[i] << " ";
            }
        }
        cout << endl << "Binary Vector: ";
        for (int i = 1; i <= n; i++) {
            cout << x[i] << " ";
        }
        cout << endl;
    } else if (s + input[k] + input[k + 1] <= sum) {
        ss(s + input[k], k + 1, r - input[k]);
    }

    if (((s + r - input[k]) >= sum) && (s + input[k + 1] <= sum)) {
        x[k] = 0;
        ss(s, k + 1, r - input[k]);
    }
}

int main() {
    int total = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    input.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> input[i];
        total += input[i];
    }

    sort(input.begin() + 1, input.begin() + n + 1);

    cout << "Sorted elements: ";
    for (int i = 1; i <= n; i++) {
        cout << input[i] << " ";
    }
    cout << endl;

    cout << "Enter target sum: ";
    cin >> sum;

    ss(0, 1, total);

    return 0;
}
