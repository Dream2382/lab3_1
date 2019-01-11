#include <iostream>
using namespace std;
int main(){

string text1,text2;
int N,count=0;
cout<<"Enter tht first text:";
cin>>text1;
cout<<"Enter tht second text:";
cin>>text2;
cout<<"Enter: ";
cin>>N;

while(count<N){
	if(count%2==0){
		cout<<text1<<" ";
		
	}else{
	cout<<text2<<" ";
	}
count++;


}

	return 0;
}
	