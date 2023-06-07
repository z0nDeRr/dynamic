#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swap(long long *p_a, long long *p_b) {
    long long temp = *p_a;
    *p_a = *p_b;
    *p_b = temp;
}

int main() {
    long long a = 10, b = 5;
    long long *p_a = &a, *p_b = &b;
    cout << "Address of p_a: " << &p_a << endl;
    cout << "Address of p_b: " << &p_b << endl;
    cout << "Sum: " << (*p_a + *p_b) << endl;
    cout << "Difference: " << (*p_a - *p_b) << "\n"<< endl;

    cout << "Before swapping: a = " << a << " b = " << b << endl;
    swap(p_a, p_b);
    cout << "After swapping: a = " << a << " b = " << b <<"\n" <<endl;

    int n;
    int *arr = new int[n];
    cout << "Enter size of array: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        arr[i] = rand() % 100; // random number between 0 and 99
        cout << "Address of arr[" << i << "]: " << &arr[i] << " Value: " << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}