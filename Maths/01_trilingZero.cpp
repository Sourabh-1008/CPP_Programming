#include<iostream>
using namespace std;
int main(){
	int n = 45;
	int result;
	for(int i=5;i<=n;i*5){
		int result = result + n/i;
	}
	return result;
}