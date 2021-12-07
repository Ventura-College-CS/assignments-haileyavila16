#include <bits/stdc++.h>
using namespace std;

const int N=1e6+4;

int a[N];
int num;
int s;
bool check(int pos)
{
    int arr_element = a[pos];
    if(s<=arr_element)
        return 1;
    else
        return 0;
}
void BinarySearch(int array_low, int array_high)
{
    while(array_low < array_high)
    {
        int array_middle=(array_low + array_high)/2;
        if(check(array_middle))
        {
            array_high=array_middle;
        }
        else 
        {
            array_low=array_middle+1;
        }
    }
    if(a[array_low]==s)
        cout << "Element found at index" << array_low;
    else
        cout << "Element does not exist in array"; 
}
int main ()
{
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> a[i];
    }
    cin >> s;
    BinarySearch(0,num);
    return 0;
}