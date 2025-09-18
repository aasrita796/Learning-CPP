#include <bits/stdc++.h>
using namespace std;

int main(){
//	int age = 20;
//	if (age>=18){
//		cout << "You are an adult \n"; 
//	}
//	else{
//		cout << "You are a minor";
//	}

//int marks;
//cout << "Enter your marks: " << marks;
//cin >> marks;
//if (marks >= 90){
//	cout << "Excellent";
//}
//else if(marks >= 80 && marks < 90){
//	cout << "Good";
//}
//else if(marks >= 70 && marks < 60){
//	cout << "Average";
//}
//else{
//	cout << "Bad";
//}

int marks;
char grade;
cout << "Enter your marks";
cin >> marks;
if (marks >= 90){
	grade = 'A';
}
else if(marks >= 80 && marks < 90){
	grade = 'B';
}
else if(marks >= 70 && marks < 60){
	grade = 'C';
}
else{
	grade = 'F';
} 
cout << grade;
}
