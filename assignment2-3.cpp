#include <iostream>
using namespace std;

double *makeNumber()
{
    double *arr = new double[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = (double)rand() / RAND_MAX;
    }
    return arr;
}
void sortNumbers(double *arr)
{
    int n = 10;
    double temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printNumbers(double *arr)
{
    int n = 10;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}   
void deleteNumbers(double *arr)
{
    delete arr;
}
int main()
{
    double *numbers;
    numbers = makeNumbers();
    cout << "The numbers before sorting are: ";
    printNumbers(numbers);
    sortNumbers(numbers);
    cout << "The numbers after sorting are: ";
    printNumbers(numbers);
    deleteNumbers(numbers);
    return 0;
}