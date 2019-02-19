#include <iostream>
#include<conio.h>
using namespace std;
void swap (int &, int &);
 main(){
 	int x;    int    y;

 	cin>>x>>y;
 	swap(x,y);
 	cout<<x<<"\t"<<y;
 	
 	
 }
 void swap (int &a, int &b){
 	int temp;
 	temp=a;
 	a=b;
 	b=temp;
 	
 }
 
