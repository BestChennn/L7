#include<iostream>
#include<string>

using namespace std;


string func1(string x){
	string y = x;
	int L = x.size();
	
	int i = 0;
	while(i < L){
		y[i] = x[L-i-1];
		i++;
	}
	return y;
}
string func2(string x){
	string y = x;
	int L = x.size();

	int i = 0 ;
	while(i < L){
		y [i]= toupper(x[i]);
		i++;
	}
	return y;	
}



int main(){
	string x ;
    cout << "Input text: " ;
	cin  >>   x ;

    string r = func1(x);
    cout << "Reversed text: "<< r <<"\n";
    
    




	
	if (func2(x) == func2(r)){
		cout<< "Palindrome: Yes";


	}else{
		cout<<"Palindrome: No";
	}
   
    return 0;
}
