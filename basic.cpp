//modify array
#include<iostream>
using namespace std;

void Modify_Array(int[], int);

int main(void) {
    int array[4] = {1, 2, 3, 4};
    Modify_Array(array, 4);
    for (int i = 0; i < 4; i++) {
        cout << array[i] << endl;
    }
}

void Modify_Array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 3;
    }
}
