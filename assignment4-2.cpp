#include <iostream>
using namespace std;
const int N = 64;

void makeArray(int array[], int N)
{
    for(int i=0;i<N;i++)
    {
        array[i] = rand() % 101;
    }
}
int LinearSearch(int array[], int N, int target)
{
    for(int i=0;i<N;i++)
    {
        if(array[i] == target)
        {
            return i;
        }
    }
    return N;
}
int BinarySearch(int array[], int N, int target)
{
    int comparison = 1;
    int left = 0;
    int right = N-1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(array[mid] == target)
        {
            return comparison;
        }
        if(array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        comparison++;
    }
    return comparison;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SortArray(int array[], int N)
{
    int i,j;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}
void print(int array[], int N)
{
    for(int i=0;i<N;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[N];

    cout << "makeArray function: \n";
    makeArray(array, N);
    print(array, N);

    cout << "\nLinearSearch for 45: \n";
    cout << LinearSearch(array, N, 45) << endl;

    cout << "\nSortArray: \n";
    SortArray(array, N);
    print(array, N);

    cout << "\nBinarySearch for 67: \n";
    cout << BinarySearch(array, N, 67) << endl;
    return 0;
}