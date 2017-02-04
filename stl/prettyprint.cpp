#include <iostream>
#include<cmath>
#include <iomanip> 
//#include<iostream>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		int A1=(int)(A);
		//stringstream stream;
		cout<<left<<hex<<showbase<<nouppercase;
		cout<<A<<endl;
		//B=round(B);
		double B1=(B*100+0.5)/100;
		//cout<<setw(15);
		const size_t MAXWIDTH=15;
		if(B1>0)
		{
		//cout<<setw(0xf);
		cout<<right<<setw(MAXWIDTH)<<setfill('_')<<"+"<<B1<<endl;
		}

		else
		{
		//cout<<setw(0xf);
		 //cout<<internal<<setfill('_')<<"-"<<B1<<endl;	
		cout<<right<<setw(MAXWIDTH)<<setfill('_')<<"+"<<B1<<endl;
		}
		cout.precision(9);
		cout<<scientific<<C<<endl;
		//cout<<A<<endl;
		
		
		//this is used to shift the he number to left and to convert it to no base::
		
	/*    cout << left << hex << showbase << nouppercase;
	//then the number A is conver
            cout << (long long) A << endl;

            // One decimal place, right aligned, show sign, and fill left with underscores
            cout.precision(2);
            cout << showpos << fixed << setfill('_') << setw(15) << right;
            cout << B << endl;

            // Scientific notation with 9 decimal places
            cout.precision(9);
            cout << noshowpos << uppercase << scientific;
            cout << C << endl;
*/
	}
	return 0;
}
