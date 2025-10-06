//Jasnoor Kaur
//24070123049
//Batch: A2


#include<iostream>
using namespace std;


int sum(int n){
    if(n<=1){ 
        return 1;
    }
    else{
        return (n+sum(n-1)); 
    }
}

int main(){
    
    cout<<sum(8);
    return 0;  
}

//OUTPUT:
/*
36
*/
