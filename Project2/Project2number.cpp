#include <iostream>
#include <iomanip>
using namespace std;
#include <cmath>


struct book
{
	string title;
	string author;
	int code;
	int release_year;
};

int books=0;
int j=0;
int k=0;
int deletes=0;
bool not_found = true;
bool undeleted = false;
bool deleted = false;

void menu();
void choice();
void add_entry();
void print();
void search();
void delete_entry();
void undelete_entry();

book information[1000];
book del_information[1000];


int main()
{
	menu();
	choice();
	
	
	return 0;
}


void menu()
{
	cout << "=========================" << endl;
	cout << "Please enter a command: " << endl;
	cout << "'A': Add an entry" << endl;
	cout << "'D': Delete an entry" << endl;
	cout << "'U': Undelete an entry" << endl;
	cout << "'P': Print the books" << endl;
	cout << "'S': Search in the list" << endl;
	cout << "'Q': Quit" << endl;
	cout << "=========================" << endl;
	cout << endl;

	return;

}


void add_entry()
{
	cin.ignore();
	      
	cout << "Enter the book title: ";
	getline(cin, information[j].title);
		  
		  
	cout << "Enter the book author: ";
	getline(cin, information[j].author);
		  
		
	cout << "Enter the book code: ";
	cin >> information[j].code;
		
	cout << "Enter the book release year: ";
	cin >> information[j].release_year;
		
	cout << endl;
    j++;
    books++;
    return;
}


void print()
{
    cout << "Books in libary: " << endl << endl;
    
    for (j=0; j<books; j++)
    {  
	    cout << "------------------------" << endl;
	    
		cout << "Title: " << information[j].title << endl;
		
		cout << "Author: " << information[j].author << endl;
		
		cout << "Code: " << information[j].code << endl;
		
		cout << "Release year: " << information[j].release_year << endl;
		
		cout << "------------------------" << endl << endl;
        
	}
	cout << "Books in libary: " << books << endl << endl;
	cout << "Deleted books: " << deletes << endl << endl;
    return;
}


void search()
{
	int s;
	
	cout << "What book do you want to search for?: ";
	cin >> s;
	
    for (j=0; j<books; j++)
     { 
	    if (information[j].code == s)
	     {
	    	not_found = false;
	     	
			cout << "------------------------" << endl;
		    
			cout << "Title: " << information[j].title << endl;
			
			cout << "Author: " << information[j].author << endl;
			
			cout << "Code: " << information[j].code << endl;
			
			cout << "Release year: " << information[j].release_year << endl;
			
			cout << "------------------------" << endl << endl;
         }
         
     }
    
	if (not_found)
	 {
	 	cout << "------------------------------------------------------------------------" << endl;
		cout << "The book you typed was not found, please add the book!" << endl;
		cout << "------------------------------------------------------------------------" << endl << endl;
	 }
	
	not_found=true;
	
 return;
	
}

void delete_entry()
{
	int d;
	
	cout << "What book do you want to delete?: ";
	cin >> d;
	
	for (j=0; j<books; j++)
    {  
	    if (information[j].code == d)
	      {
	      	deleted = true;
		    del_information[k] = information[j];
		    
		    cout << endl;
		    cout << "      Deleted Book      " << endl;
			cout << "------------------------" << endl;
			cout << "Title: " << del_information[k].title << endl;
			cout << "Author: " << del_information[k].author << endl;
			cout << "Code: " << del_information[k].code << endl;
			cout << "Release year: " << del_information[k].release_year << endl;
			cout << "------------------------" << endl << endl;
			
			while (j<books)
			{  
			information[j]=information[j+1];
			j++;
	        }
	        
           }
    }
    
    if (deleted)
    {
		books--;
		j=books;
		deletes++;
		k++;
	}
	
	deleted = false;
	return;
	
}


void undelete_entry()
{
    int u;
    
    cout << "        Deleted Books:   " << endl << endl;
    
    for (k=0; k<deletes; k++)
    {
	    cout << "------------------------" << endl;
	    
		cout << "Title: " << del_information[k].title << endl;
		
		cout << "Author: " << del_information[k].author << endl;
		
		cout << "Code: " << del_information[k].code << endl;
		
		cout << "Release year: " << del_information[k].release_year << endl;
		
		cout << "------------------------" << endl << endl;
	}
	
	cout << "What book do you want to undelete?: ";
	cin >> u;
	
	for (k=0; k<deletes; k++)
    {
	  if (del_information[k].code == u)	
		{
			undeleted = true;
		    information[j] = del_information[k];
			
		    while(k<deletes)
			 {
		      del_information[k]=del_information[k+1];
			  k++;
	         }
	    	
				
	        
		}
	}
	
	if (undeleted)
	{
	    deletes--;
	    k=deletes;
		books++;
		j++;
	}
	
	undeleted = false;
	
	
		
 return;
}



void choice()
{
	string x;
	cout << "Please choose one of the six options from the menu: ";
	cin >> x;
	cout << endl;

	while (x != "A" && x != "D" && x != "U" && x != "P" && x != "S" && x != "Q")
	{
		cout << "Invalid! Please choose one of the 6 options from the menu: ";
		cin >> x;
		cout << endl;
	}

	if (x == "A")
	{
		add_entry();
		menu();
		choice();
	}
	
	else if (x == "P")
	{
		print();
		menu();
		choice();
		
	}

	else if (x == "D")
	{
		delete_entry();
		menu();
		choice();
	}  
	
	else if (x == "U")
	{
		undelete_entry();
	    menu();
		choice();
	}

	else if (x == "S") 
	{
		search();
		menu();
		choice();
	}
	
	else if (x == "Q")
	{
		cout << "Quit!" << endl;
	}
		  
	return;
} 



