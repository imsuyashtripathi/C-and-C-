#include<iostream>
using namespace std;
int main(){
	string data;
	cin>>data;
	if(data=="break"||data=="defer"||data=="for"||data=="while"||data=="struct"||data=="else"||data=="if")
	{
		cout<<data<<"is a keyword";
	}
	else
	{
		cout<<data<<"is not a keyword";
	}
	return 0;
}
