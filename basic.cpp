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
//same way 
#include <iostream>
using namespace std;

double Average(int array[], int n);  // ফাংশনের ঘোষণা

int main(void) {
    int arr[] = {12, 32, 43, 54, 98, 43};

    // sizeof(arr) মানে অ্যারের মোট সাইজ (bytes), আর একটি int এর সাইজ ভাগ দিলে উপাদান সংখ্যা পাওয়া যায়
    int size = sizeof(arr) / sizeof(arr[0]);

    double avg = Average(arr, size); // ফাংশন কল

    cout << "The average number is " << avg << endl;

    return 0;
}

double Average(int array[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];  // সব উপাদান যোগ হচ্ছে
    }

    return (double)sum / n;  // গড় রিটার্ন করা হচ্ছে
}


//  just taking ref 
#include<iostream>
using namespace std ; 
int Ref(int &number) ; 
int main(void){
    int value = 120 ; 
    int result = Ref(value) ; 
    cout<<"The value has multiplyed by 2 is "<<result<<endl;
}
int Ref(int &number){
    return number * 2 ;
}
