#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{	

	int input; // value for intergers
	//string value; // inputs for strings

	vector<int> ivec1, ivec2; 
	vector<double> Vex2(3), Vex1;  // When you declare this, do not forget your comma or to give it a space
	Vex2 = Vex1;
	vector<int> Vex;
	vector<float> cass { 5}, stap (5 , 0.2);
	//vector<string> Curry;
	vector<string> Svec {"Hello", "World", "is", "great"};
	Svec = {"Hello", "World", "is", "better"};

	cout << "\n----------------------------------------------------------------" << endl;        
	// Reading in integers

	cout << "Please enter some integers, when done end with an * " << endl; 
	while ( cin >> input ) // Scanning all inputs in
	{
		cin.ignore();
		Vex1.push_back (input); // push_back puts the numbers into the vector
		if ( input == '*' ) 
		{
			cin.ignore();
			break;   
		}
	} 
	
	for(int i = 0; i < Vex1.size(); i++) // printing out each digit of the vector Array
	{		
		cout << "Vex1[i] = " << Vex1[i] << endl;
	}

	cout << "\n----------------------------------------------------------------" << endl;

	// Reading in Strings
	// The while loop for my reading in my string works on it own but when combined with the entire program it skips the user input for the Strings and I dont know why.
	// I tried using FLUSH to see if that helps it but it doesnt.
	string value;
	vector<string> Curry = {};
	cout << "Please enter some words, when you are done please end with an * " << flush << endl;
	int i = 0, j;
	/*while (i < 5)
	{
		 cin.ignore();
		 //cin >> value;
		 value = cin.get();
		 Curry.push_back(value);
		 i++;
	}*/

	cin.ignore();
	cin.clear();

	for( j = 0; j <= 5; j++)
	{		 
		getline(cin, value);
		Curry.push_back(value);
	}
	for( i = 1; i < Curry.size(); i++)
	{
		cout << "Curry(" << i << ") = " << Curry.at(i) << endl;
	}

	cout << "\n----------------------------------------------------------------" << endl;
	// I get an infinte loop if I try to read in my strings using this logic
	/*  while( cin >> value)
        {
            Curry.push_back(value); // push_back puts the numbers into the vector
            if ( cin.get() == '*' );
            	break;     
        } 
	 */     
	cout << "**** Vector Operators **** " << endl ;
	//vector Operators
	cout << "Size of Vector = " << Curry.size() << endl ;
	cout << "Return Reference value : " << Svec[3] << endl;
	for(int i = 0; i < Svec.size(); i++) // printing out each digit of the vector Array
	{		
		cout << "Old Content :"<< Svec[i] << endl;
	}
	Svec = {" This wasnt what I was expecting"};
	Curry = Svec ; // Assigned the data in Svec into Curry
	for(int i = 0; i < Curry.size(); i++) 
	{
		cout << "New Content :"<< Curry[i] << endl;
	}
	
	Curry = {"it is done"}; // Assigned Curry new strings
	Curry.empty();
	for(int i = 0; i < Curry.size(); i++) 
	{
		cout << "Final Content:"<< Curry[i] << endl;
	}

	//cout << "Old Content :" << Svec; // It doesnt print the string if we call it this way. we have to assign it a value or iterate through the vector for it to print.

	cout << "\n----------------------------------------------------------------" << endl;

	// Rational Operators
	if (cass == stap) cout << "cass and stap are equal\n";
	if (cass != stap)std::cout << "cass and stap are not equal\n";
	if (cass < stap) std::cout << "cass is less than stap\n";
	if (cass > stap) std::cout << "cass is greater than stap\n";
	if (cass <= stap) std::cout << "cass is less than or equal to stap\n";
	if (cass >= stap) std::cout << "cass is greater than or equal to stap\n";

	cout << "\n----------------------------------------------------------------" << endl;


	return 0;
}
