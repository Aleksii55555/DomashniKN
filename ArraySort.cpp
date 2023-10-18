#include <iostream>

int main(){
    int *arr=nullptr;
    int n;
    int maxsub=0;
    std::cin>>n;
    arr=new int[n];
    int i, j,temp;
    bool swapped;


for (i = 0; i < n ; i++) {
    std::cin>>arr[i];
}
for (i = 0; i < n ; i++) {
    

if(arr[i]-arr[i+1]>maxsub)maxsub=arr[i]-arr[i+1];//nai golqma razlika
}

    for (i = 0; i < n - 1; i++) {
        swapped = false;


        
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                temp=arr[j];
                arr[j]=arr[j+1];                                //Bubble sort
                arr[j+1]=temp;
                swapped = true;
            }
        }
 
        
        if (swapped == false)
            break;
    }

for (i = 0; i < n ; i++) {
    std::cout<<arr[i]<<" ";
}
    std::cout<<std::endl;
    std::cout<<maxsub;
}