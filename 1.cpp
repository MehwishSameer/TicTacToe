#include<iostream>
using namespace std;
int main(){
	int num1[4],num2[4],sum[4],carry,i;
	cout<<"Enter First Number:"<<endl;
	for(i=0;i<4;i++){
	cin>>num1[i];
}
	cout<<"Enter Second Number:"<<endl;
	for(i=0;i<4;i++){
	cin>>num2[i];
}
	for(i=0;i<4;i++){
		if(num1[i]==1&&num2[i]==1&&carry==1){
		sum[i]=1;
		carry=1;
	}
		else if(num1[i]==1&&num2[i]==1){
		sum[i]=0;
		carry=1;
	}
		else{
		sum[i]=num1[i]+num2[i];
		carry=0;}
	}
	for(i=0;i<4;i++){
		cout<<sum[i];
	}
	cout<<carry;
	return 0;
	}
