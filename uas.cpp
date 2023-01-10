#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	int n,i;
	float x [100], y [100],xy[100],xx[100],yy[100],x2[100],xiyi,xi,yi,xpangkat;
	n = 5;
	for (i=0; i<n; i++){
	cout << "NIlai X: ";
	cin >> x[i];
	cout << "Nilai Y: ";
	cin >> y[i];
	while ( x[i] < 0  and y[i] < 0 ) {
		cout << "Nilai harus <= 0" << endl;
		cout << "Nilai X: ";
		cin >> x[i];
		cout << "Nilai y: ";
		cin >> y[i];
		}
		
		
	struct{
	 float datax;
	 float datay;	
	} mything1,mything2;
	
	mything1.datax = x[i];
	mything2.datay = y[i];
	
	cout << mything1.datax <<","<< mything2.datay ;
	cout << endl;
	cout << endl;
	
	//Rumus XiYi
	xy[100] = (x[i]* y[i]);
	xiyi += xy[100];
	
	//rumus Xi
	xx[100] = (x[i]);
	xi += xx[100];
	
	//rumus Yi
	yy[100] = (y[i]);
	yi += yy[100];
	
	//rumus x pangkat
	x2[100] = sqr(x[i]);
	xpangkat += x2[100];
}

	
	cout <<"XiYi: "<< xiyi << endl;
	cout <<"Xi: "<< xi << endl;
	cout <<"Yi: "<< yi << endl;
	cout <<"X 2: "<< xpangkat << endl;
	

}

 


