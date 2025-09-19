#include <bits/stdc++.h>
using namespace std;

class Solution{
//FINDING LENGTH OF A STRING
//	public:
//		int findLength(string s){
//			return s.length();
//		}
//};
//int main(){
//	Solution obj;
//	string s = "Aasrita";
//	cout << obj.findLength(s);

//ACCESSING INDIVIDUAL CHARACTERS
	public:
		void accessCharacters(string s){
			for (int i=0; i<s.length(); i++){
				cout<<s[i];
			}
		}
};
	int main(){
		Solution obj;
		string s = "Aasrita";
		obj.accessCharacters(s);
		return 0;
	}




