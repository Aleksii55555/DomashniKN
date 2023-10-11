#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int m=n;
    int max=0,min=0,sum=0;
    int i;
    int f=0;

    while(n!=0){

    std::cin>>i;

    if(f==0)min=i;max=i;
    if(i>max)max=i;

    if(i<min)min=i;

    sum=sum+i;

    n--;
    f++;
    }
    double avg=sum/m;

    
    std::cout<<min<<std::endl;
    std::cout<<max<<std::endl;
    std::cout<<avg<<std::endl;
    return 0;
}