// bubblesort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class BubbleSort {
public:
    void bubble_sort(int Array[], int n) {
    int temp;
    for (int m = 0; m < n; m++)
        for (int i = 0; i < n - m - 1; i++)
            if (Array[i] > Array[i + 1]) {
                temp = Array[i];
                Array[i] = Array[i + 1];
                Array[i + 1] = temp;
            }   
}
};

void Input(int Array[], int n) {
    cout << "Enter values: "<<endl;
    for (int i = 0; i <= n - 1; i++) {
        cin >> Array[i];
    }
    cout << "Elements of your unsorted list:  ";
    for (int i = 0; i <= n - 1; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
   
}

void Print(int Array[], int n) {
    cout << "Elements of your sorted list:  ";
    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the count of element: " ;
    cin >> n;
    int* Arr = new int[n];
    BubbleSort B;
    Input(Arr, n);
    B.bubble_sort(Arr, n);
    Print(Arr, n);
    return 0;
}

