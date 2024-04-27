#include <iostream>
using namespace std;

const int N = 5;

// Function Declaration
void bsort(int*);
void order(int*, int*);

int main()
{
    // Array
    int arr[N] = { 37, 84, 62, 91, 11 };

    // Passing an array to a function
    bsort(arr);

    // Outputting a sorted array
    for (int i = 0; i < N; i++)
        cout << arr[i] << ' ';
    cout << endl;

    return 0;
}

// Algorithm

void bsort(int* ptr)
{
    for (int j = 0; j < N - 1; j++)
        for (int k = j + 1; k < N; k++)
            order(ptr + j, ptr + k);
}

void order(int* numb1, int* numb2)
{
    if (*numb1 > *numb2)
    {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
}