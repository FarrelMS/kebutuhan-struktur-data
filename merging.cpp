#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 30, 50};
    int arr2[] = {20, 40, 60};
    int n1 = 3, n2 = 3;
    int hasil[6];
    
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            hasil[k++] = arr1[i++];
        } else {
            hasil[k++] = arr2[j++];
        }
    }

    while (i < n1) hasil[k++] = arr1[i++];
    while (j < n2) hasil[k++] = arr2[j++];

    for (int x = 0; x < 6; x++) {
        cout << hasil[x] << " ";
    }

    return 0;
}