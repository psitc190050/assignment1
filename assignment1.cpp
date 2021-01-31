#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declaring constants
string printer, phone, table;
string customer_name;
string item_bought;
int id_number;
int quantity_bought;
double vat_amount;
double total_cost;
string item;
double amount_paid;
double balance;
string do_again;


const double price_of_printer = 950.00;
const double price_of_phone = 650.00;
const double price_of_table = 185.00;
const double vat = 0.12;

int main()
{

	cout << "            WELCOME TO FIKOS SUPERMARKET\n" ;
	cout << "" ;
	cout << "" ;
	cout << "Enter your name\n";
	getline(cin, customer_name);
	
	cout << "Enter your pin\n";
	cin >> id_number;
	
	//cout << "What do you want to buy\n";
	//cin >> item_bought;
	
	do
	{
		cout << "What do you want to buy\n";
	    cin >> item_bought;
	    
		if (item_bought == "printer" || item_bought == "Printer")
		{
			cout << "How many do you want to buy" << endl;
			cin >> quantity_bought;
		}else if (item_bought == "phone" || item_bought == "Phone")
		{
			cout << "How many do you want to buy" << endl;
			cin >> quantity_bought;
		}else if (item_bought == "table" || item_bought == "Table")
		{
			cout << "How many do you want to buy" << endl;
			cin >> quantity_bought;
		}else
		{
			do 
			{
				cout << "Enter a valid item" << endl;
				cin >> item_bought;
			}while ( item_bought != "phone" && item_bought != "printer" && item_bought != "table");
		
			cout << "How many do you want to buy" << endl;
			cin >> quantity_bought;
			//cout << "Comot for there" << endl;
		}
	
	
	
		if (item_bought == "printer"){
			vat_amount = vat * price_of_printer * quantity_bought;
        	total_cost = price_of_printer * quantity_bought + vat_amount;
        	//cout << "The amount you owe is " << total_cost << endl;
		}else if (item_bought == "phone")
		{
			vat_amount = vat * price_of_phone * quantity_bought;
        	total_cost = price_of_phone * quantity_bought + vat_amount;
        	//cout << "The amount you owe is " << total_cost << endl;
		}else{
			vat_amount = vat * price_of_table * quantity_bought;
        	total_cost = price_of_table * quantity_bought + vat_amount;
        	//cout << "The amount you owe is " << total_cost << endl;
		}
	
	
		cout << "Enter amount paid\n";
		cin >> amount_paid;
	
		if (amount_paid > total_cost)
		{
			balance = amount_paid - total_cost;
			//cout << "Your balance is " << balance << endl;
		}else if (amount_paid == total_cost)
		{
			balance = amount_paid - total_cost;
			//cout << "No balance\n";
		}else 
		{
			cout << "Insufficient fund, so cannot continue with the Transaction \n";
			cout << "" << endl;
			cout << "" << endl;
		}
		//cout << "Your total cost is: " << total_cost << endl;
		if (amount_paid >= total_cost)
		{
			cout << "" << endl;
	 		cout << "" << endl;
			cout << "" << endl;
			cout << "            FIKOS SUPERMARKET" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "Name of Customer:     " << customer_name << endl;
			cout << "" << endl;
			cout << "ID Number:            " << id_number << endl;
			cout << "" << endl;
			cout << "Item Bought:          " << item_bought << endl;
			cout << "" << endl;
			cout << "Quantity Bought:      " << quantity_bought << endl;
			cout << "" << endl;
			cout << "Vat amount:           $" << vat_amount << endl;
			cout << "" << endl;
			cout << "Total Cost:           $" << total_cost << endl;
			cout << "" << endl;
			cout << "Total amount paid:    $" << amount_paid << endl;
			cout << "" << endl;
			cout << "Balance:              $" << balance << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "        THANK YOU AND HAVE A NICE DAY!!!" << endl;
		}
		
		cout << "" << endl;
		cout << "" << endl;
		cout << "" ;
		cout << "" ;
		cout << "would you want to buy something else? (Yes/No)" << endl;
		cin >> do_again;
	}while ((do_again == "yes") || (do_again == "Yes"));
	
	return 0;
}
