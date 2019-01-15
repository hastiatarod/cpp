#include <iostream>
#include <conio.h>
using namespace std;
 int main() {
 	string strDayOfWeek;
 	int intDay=0;
 	cout<< "please enter a number : \n";
 	cin>>intDay;
 	switch(intDay){
 		case 1:
 			strDayOfWeek="monday";
 			break;
 		case 2:
 			strDayOfWeek="tuesday";
 			break;
 		case 3:
		     strDayOfWeek="wednesday";
		     break;
		case 4:
		     strDayOfWeek="thursday";
		     break;
		case 5:
			strDayOfWeek="friday";
			break;
		case 6:
			strDayOfWeek="saturday";
			break;
		case 7:
			strDayOfWeek="sunday";
			break;
		default:
			strDayOfWeek="Unknown day!";
			}
			cout<<"Day Of the week is :" <<strDayOfWeek;
			getch();
			
		}
		
			
			
			
	 
 	
