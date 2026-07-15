#include<iostream>
using namespace std;

class Sort
{
public:

    void Selection_Sort(int arr[], int n)
    {
        for(int i = 0; i < n - 1; i++)
        {
            int min = i;

            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] < arr[min])
                {
                    min = j;
                }
            }

            if(min != i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }

            cout << "\nElements after Pass - " << i + 1 << ": ";
            for(int j = 0; j < n; j++)
            {
                cout << arr[j] << " ";
            }
        }
    }

    void Insertion_Sort(int a[], int n)
    {
        for(int i = 1; i < n; i++)
        {
            int temp = a[i];
            int j = i - 1;

            while(j >= 0 && a[j] > temp)
            {
                a[j + 1] = a[j];
                j--;
            }

            a[j + 1] = temp;

            cout << "\nElements after Pass - " << i << ": ";
            for(int j = 0; j < n; j++)
            {
                cout << a[j] << " ";
            }
        }
    }
};

int main()
{
    int n;
    int arr[100];
    int a[100];
    Sort s;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    s.Selection_Sort(arr, n);

    cout << "\n\nEnter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    s.Insertion_Sort(a, n);

    return 0;
}