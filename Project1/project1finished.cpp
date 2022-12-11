#include <iostream>
#include <iomanip>
using namespace std;
#include <cmath>
void O1();
void menu();
void choice();

int y, a, b, cost_coke, cost_water, inv_cards, tbls, cost_cards, candy; // Values gets passed to this after the option is complete, so it can be a global value

int o1, o2, o3, o4, o5, o6; //These are used under each function so that option 7 only runs when they all are 1, which is when the 6 function above is processed.

int main()
{

	cout << "Hi customer, The Wedding Planning Assistant is pleased to be at your service!" << endl;
	menu(); //Function for the menu with the options
	choice(); //Function that lets you choose one of the options, and answers your choice


	return 0;
}

void O1() //Function for entering the number of guests
{
	
	cout << endl;
	cout << "Enter a number for invited guests: ";
	cin >> y;
	
	while (y <= 0)
	{
		cout << "Please enter a positive integer number for invited guests: "; //This message is displayed if the user types in an integer number less than 1
		cin >> y;
	}
	
	cout << endl;
	cout << "Number of invited guests are: " << y << endl;
	cout << endl;
	o1=1;
	o2=0;
	o3=0;
	o4=0;
	o5=0;
	o6=0;

	return;
}

void O2() //Function for the amount of invitation cards and sweets needed.
{
	
	int sweets;

	inv_cards = y / 2; // y equals to the amount of guests
	
	if (y <= 0)
	{
		cout << "Please enter the amount of guests first (option 1)" << endl << endl;
		choice();
	}
	else if (y<=2)
	{
		cout << endl;
		cout << "The number of invitation cards needed is 1" << "." << endl;
		inv_cards=1;
	    cout << "The number of sweets needed is " << ceil(y*1.2) << "." << endl << endl;
	    candy=ceil(y*1.2);
	    o2=1;
	}
	else 
	{
		cout << endl;
		cout << "The number of invitation cards needed is " << inv_cards << "." << endl;
	    cout << "The number of sweets needed is " << ceil(y*1.2) << "." << endl << endl;
	    candy=ceil(y*1.2);
	    o2=1;
		}
	  	
	choice(); // Goes back to the main function
}


void O3() //Function for the number of tables 
{

	float tbl;
    int xtra;
	
	tbl=y/6; //Number of tables per 6th guest
	xtra=ceil(tbl)+1; //Number of tables per 6th guest when the number is not divided evenly with 6
	
	if (y>6)
	{
	 if (y % 6 == 0)
	  {
		cout << endl;  
		cout << "Number of tables needed: " << tbl << endl;
		cout << endl;
		tbls=tbl;
		o3=1;
		choice();
       }
	
	 else
	   {
		cout << endl;
		cout << "Number of tables needed: " << xtra << endl; //Will be printed when the number is not divided evenly with 6, and an extra table wil be added for the rest
		cout << endl;
		tbls=xtra;
		o3=1;
		choice();
	    }
	}
	
	else if (y==0) //y will only be 0 if option 1 has not been done yet, therefore this will run
	{
		cout << endl;
		cout << "Please enter the amount of guests first (option 1)" << endl << endl;
		choice();
	}
	
	else
	{
		cout << endl;
		cout << "Number of tables needed: 1" << endl; //else would be if the number is any integer from 1 to 6, which means we only need 1 table for the guests
		cout << endl;
		tbls=1;
		o3=1;
		choice();
	}
	return;
}



void  O4() 
{
	//Determine the drinks order
	int cc; // Coke Cases
	int wc; // water cases
	int rc;
	wc = 2;
	cc = 6;

	if (y > 0) 
	{
		if (y % wc != 0) 
		{
			rc = y / wc;
			cout << endl;
			cout << " The amount of coke for " << y << " people is: " << y / cc << " cases" << endl;
			cout << " The amount of water for " << y << " people is: " << rc + 1 << " cases" << endl << endl << endl;
			a = y/cc;
			b = rc +1;
			o4=1;
			choice();
		}
		
		else 
		{
			cout << endl;
			cout << "The amount of coke for " << y << " people is: " << y / cc << " cases" << endl;
			cout << "The amount of water for " << y << " people is: " << y / wc << " cases" << endl << endl << endl;
			a= y/ cc;
			b = y/ wc;
			o4=1;
			choice();
		}
	}
	else 
	{
		cout << endl;
		cout << "Please enter the amount of guests first (option 1)" << endl << endl;
		choice();
	}
	return;
}


void O5() //Determine the cost of invitations cards
{
	if (y <= 0) 
	{
		cout << endl;
		cout << "Please enter the amount of guests (option 1) and find the amount of invitation cards (option 2) first" << endl << endl;
		choice();
	}
	else if (inv_cards<=0)
	{
		cout << endl;
		cout << "Please find the amount of invitation cards first (option 2)" << endl << endl;
		choice();
	}
	else
	{
		cout << endl;
		cout << "The cost of invitation cards for " << y << " people is: " << inv_cards * 200 << " Kroner" << endl << endl;
		cost_cards=inv_cards*200;
		o5=1;
		choice();
	}
	return;

}

void O6 () // Determine the cost of coke cases and water cases
{
	cost_coke = a * 30;
	cost_water = b * 20;
	
	if (y <= 0) 
	{
		cout << endl;
		cout << "Please enter the amount of guests first (option 1)" << endl << endl;
		choice();
	}
	else if (a<=0 && b<=0)
	{
		cout << endl;
		cout << "Please determine the amount of drinks first (option 4)" << endl << endl;
		choice();
	}
	
	else 
	{
		cout << endl;
		cout << "Cost of coke cases is " << cost_coke << " NOK" << endl;
		cout << "Cost of water cases is " << cost_water << " NOK" << endl << endl;
		o6=1;
		choice ();
	}
}

void O7()
{
	if (y==0) // y = number of guests
	{
		cout << "Please enter the amount of guests first (option 1)" << endl << endl;
		choice();
	}
	else if (o1!=1 || o2!=1 || o3!=1 || o4!=1 || o5!=1 || o6!=1) // If the options before O7 is not given a value, it will ask you to run them all.
	{
		cout << endl;
		cout << "Please run all the options before displaying the information" << endl << endl;
		choice();
	}
	else // Displaying all the information given.
	{
		cout << endl;
		cout << "Number of invited guests: " << y << endl;
		cout << "Number of invitation cards: " << inv_cards << endl;
		cout << "Number of sweets: " << candy << endl;
		cout << "Number of tables: " << tbls << endl;
		cout << "Cases of coke: " << a << endl;
		cout << "Cases of water: " <<  b << endl;
		cout << "Cost of invitation cards: " << cost_cards << " NOK" << endl;
		cout << "Cost of drinks: " << cost_coke << " NOK for coke cases" << " and " << cost_water << " NOK for water cases" << endl << "Total of drinks: " << (cost_coke)+(cost_water) << " NOK" << endl << endl;
		o1=0;
		o2=0;
		o3=0;
		o4=0;
		o5=0;
		o6=0;
		choice();
	}
	
	
}


void menu()
{
	cout << endl;
	cout << "1. Enter number of invited guests." << endl;
	cout << "2. Determine the number of invitation cards and sweets" << endl;
	cout << "3. Determine the number of tables needed" << endl;
	cout << "4. Determine drinks order" << endl;
	cout << "5. Cost of invitation cards" << endl;
	cout << "6. Cost of drinks" << endl;
	cout << "7. Display all information" << endl;
	cout << "8. Quit" << endl;
	cout << endl;

	return;

}

void choice()
{
	int x;
	cout << "Please choose one of the eight options from the menu (1-8): ";
	cin >> x;

	while (x > 8 || x < 1)
	{
		cout << "Invalid! Please choose one of the eight options from the menu (1-8): ";
		cin >> x;
	}

	if (x == 1)
	{
		O1();
		choice();
	}

	else if (x==2)
	{
		O2();
	}  
	
	else if (x==3)
	{
		O3();
		
	}
	    
	else if (x == 4) 
	{
		O4();
	}
	else if (x == 5) 
	{
		O5();
	}
	
	else if (x==6)
	{
		O6();
	}
		    
		     
	else if (x==7)
	{
		O7();
	}
	   
	else if (x==8) //stops the program
	{
		cout << "Quit!" << endl;
	}
		  
	return;
}
