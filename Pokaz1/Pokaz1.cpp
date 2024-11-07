#include <iostream>
using namespace std;

void copyArray(int* src, int* dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int size = 5;
    int srcArray[] = { 1, 2, 3, 4, 5 };
    int* destArray = new int[size];

    copyArray(srcArray, destArray, size);

    cout << "скопированый массив ";
    for (int i = 0; i < size; i++) {
        cout << destArray[i] << " ";
    }
    cout << endl;

    delete[] destArray;
    return 0;
}
