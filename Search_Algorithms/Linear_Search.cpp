#include<iostream>
using namespace std;
int linearSearch(int *arr,int n, int key){
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[3],n,key;
    n= sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the elements of the array";
    for(int i=0;i<=n;i++)
    {
      cin>>arr[i];
    }
    cout << "Enter the key ";

     cin>>key;
     int loc =linearSearch(arr,n,key);;
    cout<<endl<<"The Entered key"<<""<<key<<"is found at location"<<""<<loc+1;
    return 0;







}