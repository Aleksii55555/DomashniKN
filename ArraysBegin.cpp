#include <iostream>

int main(){

    int *arr=nullptr;
    int size,j,k;
    double res;
    std::cin>>size;

    arr=new int[size];

    for(int i=0;i<size;i++){

        std::cin>>arr[i];

    }
    char c=' ';

    while( c!='e'){
    
      std::cout<<"insert index:" ;   
      std::cin>>j;


      std::cout<<"insert command:";
      std::cin>>c;  

      std::cout<<"insert number:";  
      std::cin>>k;

    if(c=='e') break;
    if(c=='+') res=arr[j]+k;
    if(c=='-') res=arr[j]-k;
    if(c=='/') res=arr[j]/k;
    if(c=='*') res=arr[j]*k;

std::cout<<res<<std::endl;

    }
 delete []arr;
    return 0;
}