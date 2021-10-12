#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void fillupArray(int *arr)
{
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        arrr[i] = rand() % 100;
    }
}
void printArray(int *arr)
{
    for(int i=0;i<10;i++)
        cout << arr[i] << " ";
    return;
}
int main()
{
    int *arr = new int[10];
    fillupArray(arr);
    printArray(arr);
    
    return0;
}