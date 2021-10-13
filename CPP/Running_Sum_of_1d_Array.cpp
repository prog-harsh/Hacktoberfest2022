#include<iostream>

using namespace std;
int main() {
    int arr[4];
    cout << "Enter Four Numbers  = ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    int new_sum[4];
    for (int i = 0; i < 4; i++) {
        if (i < 1) {
            new_sum[i] = arr[i];
        } else {
            new_sum[i] = new_sum[i - 1] + arr[i];
        }
    }

    cout << endl << endl << "Running Sum of 1d Array now wil be :: " << endl << endl;
    for (int i = 0; i < 4; i++) {
        cout << new_sum[i] << "  ";
    }
    return 0;
}

