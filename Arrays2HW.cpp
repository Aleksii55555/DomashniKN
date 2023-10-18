#include <iostream>

int main(){
    
int *arr=nullptr;
    int size,k,temp;
    std::cin>>size;

    arr=new int[size];

    for(int i=0;i<size;i++){

        std::cin>>arr[i];

    }
    std::cin>>k;

for(int i=0;i<size;i++){
    
    if(k==arr[i]){
    for(int j=i;j>0;j--){

        arr[j]=arr[j-1];
    }
    arr[0]=k;

    }

    }

for(int i=0;i<size;i++){

        std::cout<<arr[i];

    }
    
    delete []arr;

    return 0;
}