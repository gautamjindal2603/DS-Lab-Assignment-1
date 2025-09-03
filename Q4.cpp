#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
    if(n==0){
        cout<<"array is empty"<<endl;
        
    }
   
   int start=0,end=n-1;
   while(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
   cout<<"Reversed array:"<<endl;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
}

int main() {
    int arr[100];
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Input elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr,n);
    return 0;
}
