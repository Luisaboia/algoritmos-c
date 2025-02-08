#include <iostream>

void ordenacao_insercao(int arr[], int n) {
    for (int j = 1; j < n; j++) {
        const int key = arr[j];
        int i = j - 1;

        // Move os elementos de arr[0..j-1] que são maiores que a chave
        // para uma posição à frente de sua posição atual
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    constexpr int n = std::size(arr);

    ordenacao_insercao(arr, n);

    std::cout << "Array ordenado: ";
    for (const int i : arr) {
        std::cout << i << " ";
    }
    return 0;
}