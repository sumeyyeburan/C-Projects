#include <iostream>

using namespace std;
#define SIZE 5

//global variables
int array[SIZE];
int i,j;

void ascending();
void descending();
void swap(int *,int *);
void add_average();
void findElement();
void findRepeater();
void printEvenOdd();
void display();

int main(){
	int op;
	
	cout<<"\n~~~~ WELCOME OPERATIONS RELATED TO ARRAYS  ! ~~~~"<<endl;

	for(i=0;i<SIZE;i++){
		cout<<"["<<i<<"]: ";
		cin>>array[i];
	}
	
	cout<<endl;
	do {
		cout<<"\n=================================================="<<endl;
		cout<<"\n**** THE MENU ****\n"<<endl;
		cout<<"1-Ascending Order"<<endl;
		cout<<"2-Descending Order"<<endl;
		cout<<"3-Find the Sum and Average of the Elements of the Array"<<endl;
		cout<<"4-Find the Element"<<endl;
		cout<<"5-Find Repetitive Element"<<endl;
		cout<<"6-Print the Even and Odd Elements of the Array"<<endl;
		cout<<"7-Display the Array"<<endl;
		cout<<"8-Exit"<<endl;
		cout<<endl<<"Your operation: ";
		cin>>op;
		
		switch(op){
		case 1:
			ascending();
			break;
		case 2:
			descending();
			break;
		case 3:
			add_average();
			break;
		case 4:
			findElement();
			break;
		case 5:
			findRepeater();
			break;
		case 6:
			printEvenOdd();
			break;
		case 7:
			display();
			break;
		case 8:
			cout<<"\nExiting..."<<endl;
			exit(0);
		default:
			cout<<"\nInvalid Input!"<<endl;		
		}
		
	}while(1);
}

void ascending(){
	//bubble sort
	for(i=0;i<SIZE-1;i++){
		for(j=0;j<SIZE-1-i;j++){
			if(array[j]>array[j+1]){
				swap(&array[j],&array[j+1]);
			}
		}
	}
}

void descending(){
	//bubble sort
	for(i=0;i<SIZE-1;i++){
		for(j=0;j<SIZE-1-i;j++){
			if(array[j]<array[j+1]){
				swap(&array[j],&array[j+1]);
			}
		}
	}
}

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void add_average(){
	int result=0;
	double ave;
	
	for(i=0;i<SIZE;i++){
		result+=array[i];
	}
	
	cout<<"\nSum of the elements of the array: "<<result;
	ave=result/SIZE;
	cout<<"\nAverage of the elements of the array: "<<ave<<endl;
}

void findElement(){
	int key;
	
	cout<<"\nPlease enter the searched element: ";
	cin>>key;
	
	for(i=0;i<SIZE;i++){
		if(array[i]==key){
			cout<<"\nThe element is found."<<endl;
			cout<<"["<<i<<"]: "<<array[i]<<endl;
			return;
		}
	}
	cout<<"\nThe element is not found."<<endl;
}

void findRepeater(){
	int repeaterCount,ElementCount=0,repeaterElementCount=0;
	int temp[SIZE]; //Temporary array to track repeated elements
	int k,cont;
	
	for(i=0;i<SIZE;i++){
		cont=0; // Temporary control variable, reset to 0 each time
		
		for(k=0;k<SIZE;k++){
			if(temp[k]==array[i]){
				cont=1; // array[i] is a repeated element in the temp array
				break; // Found a repeated element, exit the loop
			}
		}
		
		// Skip if array[i] is already marked
		if(cont==1){
			continue;
		}
		
		repeaterCount=1; // Counter for the repeated number, reset to 1 each time
		
		// Count how many times array[i] repeats in the array
		for(j=i+1;j<SIZE;j++){
			if(array[i]==array[j]){
				repeaterCount++; // Increment if the number repeats
			}
		}
		
		// If repeaterCount is greater than 1, it's a repeated element
		if(repeaterCount>1){
			cout<<"\nRepeater Element: "<<array[i]<<endl;
			cout<<"Repeater Count: "<<repeaterCount<<endl;
			repeaterElementCount++;
			temp[i]=array[i]; // Add the repeated number to the temp array
		}
	}
	
	// Print the number of repeating elements in the array
	cout<<"\nNumber of repeating elements in the array: "<<repeaterElementCount<<endl;
}

void printEvenOdd(){
	int evenCount=0,oddCount=0;
	
	for(i=0;i<SIZE;i++){
		if(array[i]%2==0){
			evenCount++;
		}
		else{
			oddCount++;
		}
	}
	cout << "\nNumber of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
}

void display(){
	cout<<"\nArray"<<endl;
	for(i=0;i<SIZE;i++){
		cout<<array[i]<<"\t";
	}
	cout<<endl;
}
