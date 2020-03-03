//The Hungry Knight//
/*Chloe Perkins
Computer Science Programming 1
TheHungryKnight
Due January 21st, 2020*/
/*My program will greet the guest that I am helping tonight, it will take an input from the user,
and calculate how much money each item cost and then a subtotal, as well as the tax.
I will tell the Knight the price.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {  
//starting off with the introductions//                                                                                                                                     
	cout << "Welcome to the Knight's Inn and Tavern, Sir." << endl;                                           
    cout << "We would be honored to help you and your men by allowing you to lodge and eat." <<endl;
    cout << " We shall watch and take care of your animals and dont worry about the price." <<endl;
	cout << " Your title and your honor will pay for your stay tonight."<< endl;
	
//asking the user for their name and characteristics//	
	string name;                                                                                              
	string characteristic;
	cout << " What is your name? " << endl;
	cin >> name;
	cout << "What is a characteristic of yourself? " << endl;
	cin >> characteristic;
	cout << " Thank you Sir  " << name << "  the  " << characteristic <<  ", for your service." << endl;
	
//taking in the different inputs from the user for the amount of food to prepare//
	int roast_pheasant;                                                                                        
	int beef_stew;
	int loaf_of_bread;
	int fine_fruit;
	cout << "How much roast pheasant should  we prepare for you and your troops, Sir " << name <<  " the " << characteristic << " ? " << endl;      
	cin >> roast_pheasant;
	cout <<	"How many bowls of beef stew should we make for you and your troops, Sir " << name <<  " the " << characteristic << " ? " << endl;
	cin >> beef_stew;
	cout << "How mand loafs of bread should we make for you and your troops, Sir " << name <<  " the " << characteristic << " ? " <<endl;
	cin >> loaf_of_bread;
	cout << "How many fine fruits should we prepare for you and your troops, Sir " << name <<  " the " << characteristic << " ? " <<endl;
	cin >> fine_fruit;
	
//Final calculations with the subtotal, the tax, and the total//
	float subtotal;
	float tax;                                                                                                    
	float total;
	subtotal = 15.10 * roast_pheasant + 3.49 * beef_stew + 5.17 * loaf_of_bread + 1.19 * fine_fruit;
	tax = subtotal * .05;
	total = subtotal + tax;
	
//make sure the tinal total and tax and stuff was correct with the defalt enter amounts//
	cout << "The final calculation for your meal tonight is " << total << " silver pieces. " << endl;
	
	
	
}




