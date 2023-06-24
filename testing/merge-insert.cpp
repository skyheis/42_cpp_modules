#include <iostream>
#include <vector>

// Funzione per l'algoritmo di insertion sort
void insertionSort(std::vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Funzione per il merge delle due metà ordinate
void merge(std::vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Funzione principale dell'algoritmo merge-insertion sort
void mergeInsertionSort(std::vector<int>& arr, int left, int right, int threshold) {
    if (left < right) {
        if (right - left <= threshold) {
            insertionSort(arr, left, right);
        } else {
            int middle = left + (right - left) / 2;

            mergeInsertionSort(arr, left, middle, threshold);
            mergeInsertionSort(arr, middle + 1, right, threshold);
            merge(arr, left, middle, right);
        }
    }
}

int main() {
    std::vector<int> arr = {9, 3, 7, 5, 1, 8, 2, 6};
    int threshold = 5;

    mergeInsertionSort(arr, 0, arr.size() - 1, threshold);

    std::cout << "Array ordinato: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
