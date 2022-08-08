//this work was done and edited by my ownself
# include<iostream>
using namespace std;
void AvgOfPrimeNum(){
	int n;    int TotalOfPrimeNumbers;   float countOfPrimeNumbers;   float avgOfPrimeNumbers;
	TotalOfPrimeNumbers = 0;      countOfPrimeNumbers = 0;
	cout<<"Enter positive integer: ";
	cin>>n;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<n<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<n;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		TotalOfPrimeNumbers+=x;
		countOfPrimeNumbers+=1;
	    }
	}
	avgOfPrimeNumbers = TotalOfPrimeNumbers/countOfPrimeNumbers;
	cout<<"The total of the the printed prime numbers above is "<<TotalOfPrimeNumbers<<endl;
	cout<<"The count of the prime numbers is "<<countOfPrimeNumbers<<endl;
	cout<<"The average the of the total of the prime numbers above is "<<avgOfPrimeNumbers<<endl;
}
int main(){
	AvgOfPrimeNum();
	return 0;
}
