#include <iostream>
using namespace std;
int main(){
	double sum=0;
	int i=6;
	
	while ( i<=19){
		double n=i;
		sum +=1/n;
		i=i+1;
	}
	
	cout<<"sum =  "<<sum;
	
	return 0;

	
	
	
}