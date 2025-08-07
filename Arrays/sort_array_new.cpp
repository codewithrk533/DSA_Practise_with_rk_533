#include <iostream>
using namespace std;

int main(){
    int arr[]={5,3,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int new_array[5];

    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp2 = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp2;
        }
    }
    
}
for(int i=0;i<n;i++){
    new_array[i]=arr[i];
}
for(int i=0;i<5;i++){
std::cout<<"Sorted array :"<<new_array[i]<<std::endl;
    }
    
}

