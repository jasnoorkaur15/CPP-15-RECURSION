//Jasnoor Kaur
//24070123049
//Batch: A2

#include<iostream>
#include<string.h>
using namespace std;


void reverse(char*str){
   if (*str) 
   {
       reverse(str+1); 
       cout<<("%c", *str);
   }
}
 
int main(){
   char a[50];
   cout<<"Enter a string: ";
   cin>>a;
   reverse(a); 
   return 0;
}

//OUTPUT:
/*
Enter a string: Mishree
eerhsiM
*/
