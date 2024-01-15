#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter first value ";
	cin>>a;
	cout<<"enter second value ";
	cin>>b;
	cout<<"enter third value ";
	cin>>c;
	if(a==b){
		if(b==c){
			cout<<"Equilateral: All three sides are equal. ";
		}
		else{
			cout<<"Isosceles: Two sides are equal. ";
		}
	}
		else{
			if(b==c){
				cout<<"Isosceles: Two sides are equal. ";
			}
			else if(c==a){
				cout<<"Isosceles: Two sides are equal. ";
				
			}
			else{
			cout<<"Scalene: No sides are equal. ";	
			}
		}
	}


