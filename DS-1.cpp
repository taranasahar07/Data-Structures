#include <iostream>
#define MAX_SIZE 100
using namespace std;
template <class T>
int linearSearch(T *arr, int size, T el)
{
    for (int i = 0; i < size; i++)
    if (arr[i] == el)
    return i;
    return -1;
}
int main(void)
{
    int ch = 1, el, res, N, arr[MAX_SIZE];
    cout << "Enter the number of elements: ";
    cin >> N;
    cout << "Enter array elements: ";
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << "Enter search element: ";
    cin >> el;
    res = linearSearch<int>(arr, N, el);
    if (res != -1)
        cout << "FOUND: Element found at index "<< res << endl;
    else
        cout << "NOT FOUND: Element not found in array"<< endl;
    return 0;
}
