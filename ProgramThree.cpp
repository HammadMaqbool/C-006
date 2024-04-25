#include<iostream>
using namespace std;
int Add(int, int, int);
int main()
{
	int Physics, Math, English;
	cout<<"Please enter marks for subject one";
	cin>>Physics;
	
	cout<<"Please enter marks for subject two";
	cin>>Math;
	
	cout<<"Please enter marks for subject three";
	cin>>English;
	
	cout<<Add(Physics, Math, English)+10;
	
}

int Add(int Phy, int math, int eng)
{
	return Phy+math+eng;
}