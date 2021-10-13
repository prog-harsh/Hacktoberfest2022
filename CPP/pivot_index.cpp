#include<iostream>

using namespace std;

int main()
{
  int flag=0;
  int arr[] = {1,4,6,6,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  /*                       //uncomment this if you need to get your own input
  int n;
  cout << "Enter the no of elements : " ;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout << "Enter the " << i << " Element : ";
    cin >> arr[i];
  }
  */
  int suml,sumr;                           // finding size or no of elements in the array
  for(int i=0;i<n ;i++)
  { 
    suml = 0;                              //we are making sum on left and right as 0 every time we do not get the result
    sumr = 0;
    for(int j=0;j<n;j++)
      if(i!=j) {                            //we should not include that point because we are taking that as pivot point
        if(i>j)                             //if the index is greater we add all elements to sum on left
          suml += arr[j];
        else                                //if the index is greater we add all elements to sum on left
          sumr += arr[j];
      }
    if(suml == sumr)
      {
        cout << "Pivot point : " << i ;
        flag=1;
        break;
      }
  }
  if(flag == 0)
    cout <<"Pivot point not found  -1";
  return 0;
}
