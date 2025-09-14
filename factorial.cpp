//Jasnoor
//24070123049
#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
int main(){
    int a;
    cout<<"Enter number to find factorial: ";
    cin>>a;
    cout<<"Factorial of "<<a<<" is: "<<factorial(a);
    
    return 0;
}

//OUTPUT:

//Enter number to find factorial: 4
//Factorial of 4 is: 24
