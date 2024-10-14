#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, input, target;
    vector<int> arr;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    cout << "Masukkan " << n << " elemen array: " << std::endl;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        arr.push_back(input);
    }

    int max_value = *std::max_element(arr.begin(), arr.end());
    cout << "Nilai tertinggi dalam array: " << max_value << std::endl;

    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            cout << "Angka " << target << " ditemukan di indeks " << i << std::endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << target << " tidak ditemukan dalam array." << std::endl;
    }

    return 0;
}
