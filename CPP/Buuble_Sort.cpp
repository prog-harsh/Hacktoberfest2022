
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array before sorting : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
