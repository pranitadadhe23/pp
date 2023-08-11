#include<iostream>
using namespace std;
class bank{
	public:
		double bal,ints,intc;
	 	bal = 5000;
		double savingacc(double sr)//saving acc rate
		{
			ints= sr;
			bal = bal+(bal*ints);
			return bal;
		}
		double checkingacc(double sr)
		{
			intc = sr;
			bal = bal+(bal*intc);
			return bal;
		}
};
int main()
{
	double bl1,bl2;
	bank b1,b2;//obj
	bl1=b1.savingacc(0.02);
	bl2=b2.savingacc(0.01);
	
	cout<<"Balance is "<<bl1;
	cout<<"Balance is "<<bl2;
		
	return 0;
}
