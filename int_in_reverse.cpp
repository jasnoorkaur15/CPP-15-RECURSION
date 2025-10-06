//Jasnoor Kaur
//24070123049
//Batch: A2

#include<iostream>
#include<string.h>
using namespace std;


void print_reverse(int n){
    if(n>0) 
    {
        cout<<(n%10);
        print_reverse(n/10); 
    }
}
    
int main(){
    int m;
    cout<<"Enter the number: ";
    cin>>m;
    print_reverse(m); 
    return 0;
}

//OUTPUT:
/*
Enter the number: 35627
72653
*/
