#include <iostream>

using namespace std;

class Complex{
	private:
		int real;
		int imag;
	public:
		Complex(int realPart,int imagPart){
			real=realPart;
			imag=imagPart;
		}
		
		void add(Complex c1,Complex c2){
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
		}
		
		void sub(Complex c1,Complex c2){
			real=c1.real-c2.real;
			imag=c1.imag-c2.imag;
		}
		
		void display(){
			if(imag>0){
				cout<<real<<" + "<<imag<<"i"<<endl;
			}
			else if(imag<0){
				cout << real << " - " << -imag << "i" << endl;
			}
			else{
				cout<<real<<endl;
			}
		}	
};

int main(){
	int real1,imag1;
	int real2,imag2;
	
	cout<<"\nPlease enter real part of first complex number: ";
	cin>>real1;
	cout<<"Please enter imaginary part of first complex number: ";
	cin>>imag1;
	
	Complex c1(real1,imag1);
	cout<<"\nFirst Complex Number: ";
	c1.display();
	cout<<endl;
	
	
	cout<<"\nPlease enter real part of second complex number: ";
	cin>>real2;
	cout<<"Please enter imaginary part of second complex number: ";
	cin>>imag2;
	
	Complex c2(real2,imag2);
	cout<<"\nSecond Complex Number: ";
	c2.display();
	cout<<endl;
	
	Complex c3(0,0);
	
	c3.add(c1,c2);
	cout<<"\nResult of Complex Number Sum: ";
	c3.display();
	
	c3.sub(c1,c2);
	cout<<"\n\nResult of Complex Number Subtraction: ";
	c3.display();
}
