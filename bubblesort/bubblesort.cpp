// bubblesort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class BubbleSort {
public:
    BubbleSort() {

    }
    void bubble_sort(int Array[], int size);
    void Input(int Array[], int n);
    void Print(int Array[], int n);
    int Array[100];
    int n;
    int temp;
    ~BubbleSort(){}
};

void BubbleSort:: Input(int Array[], int n) {
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


void BubbleSort::bubble_sort(int Array[], int n) {
    for (int m = 0; m < n; m++)
        for (int i = 0; i < n - m - 1; i++)
            if (Array[i] > Array[i + 1]) {
                temp = Array[i];
                Array[i] = Array[i + 1];
                Array[i + 1] = temp;
            }
   
}


void BubbleSort::Print(int Array[], int n) {

   
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
    B.Input(Arr, n);
    B.bubble_sort(Arr, n);
    B.Print(Arr, n);
    return 0;
}

