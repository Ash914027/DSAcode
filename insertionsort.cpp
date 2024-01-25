#include <iostream>
using namespace std;
void printArray(int* A ,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n")
}
void insertionSort(int *A, int n)
{
    int key,j;
    for(int i=1;i<=n-1 ;i++)
   {
    key=A[i];
    j=i-1;
    while(j>=0 && A[j]>key)
    {
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=key;
   }
}
int main()
{
    int n;
    cin<<n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin<<arr[i];
    }
    printArray(arr,n);

}