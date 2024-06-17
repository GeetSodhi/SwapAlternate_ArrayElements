#include<iostream>
using namespace std;
void swapp(int arr[],int size){
    int first=0;
    int second=first+1;
    while (first<size-1)
    {
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
        first=first+2;
        second=first+1;
        /* code */
    }
    

}
void printarr(int arr[],int size){
    cout<<"Alternate Swap array is "<<endl;
    for (int i = 0; i < size; i++)
    {cout<<arr[i]<<" ";
        /* code */
    }
    
}
int main(){
    int n[6]={2,3,4,5,6,7};
        cout<<"Original  array is "<<endl;
    for (int i = 0; i<6; i++)
    {cout<<n[i]<<" ";
        /* code */
    }
    cout<<endl;
    
    swapp(n,6);
    printarr(n,6);


return 0;
}