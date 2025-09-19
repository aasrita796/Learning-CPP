#include<bits/stdc++.h>
using namespace std;
int day = 4;
int x = 2;
int y = 3;
int main(){
//switch(day){
//	case 1:
//		cout<<"Monday";
//		break; //serves as exit mechanism from the switch statement
//	case 2:
//		cout<<"Tuesday";
//		break;
//	case 3:
//		cout<<"Wednesday";
//		break;
//	case 4:
//		cout<<"Thursday";
//		break;
//	case 5:
//		cout<<"Friday";
//		break;
//	//default case is optional
//	//duplicate of case values are not allowed in c++ 
//}

switch(x){
	case 1:
		cout << "x is 1";
	switch(y){
		case 1:
			cout << "y is 1";
		case 2:
			cout << "y is 2";
	}
	default:
		cout << "x is not 1";
}
}


