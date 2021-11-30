#include<iostream>

using namespace std;

int main()
{

	int i = 0, P[5000], k, result, q=0;
	while(q < 5000){
		P[q] = 2*q+1;
		q++;
	}

	cout<<"Please input k: ";
	cin>> k ;
	
	if(k > 0){
		while(i<5000){
			if((P[i]%k)==0){
				result = result - P[i];
				}else{
					result = result + P[i];
					}
					i++;
					}
		cout<<"Result = "<< result ;	
		
			}else{
		cout<<"Invalid input!!!";
	}
	
	return 0;
}
