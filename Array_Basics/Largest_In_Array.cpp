#include<iostream>
using namespace std;
int main(){
    int A[5];
    int n= sizeof(A)/sizeof(int);
    int max=0;
    cout<<"enter the elements of the array";
    for( int i=0;i<=n;i++){
        cin>>A[i];
    }
    for(int i=0;i<=n;i++)
    {
      if(A[i]>A[i+1])
      {
        max= A[i];
      }
      else{
        continue;
      }
      cout<<"the larget number in array is"<<max;
    }
    return 0;
}
