#include <iostream>
#include <string>
using namespace std;
int choices; int drink; int snack; int sweet; double money; double sum;
double one = 0.50; double two = 1.00; char ans; double three = 1.25;
double four = 1.50; double five = 2.00; double six = 2.25; double sev = 3.00;
double eight = 4.00; char say; bool again = true; bool dAgain = true;
bool snAgain = true; bool sAgain = true;//initialising & declaring variables
string arr1[] = { "Pepsi","Sprite","Chocolate Milk","Red Bull","Cold Coffee " };//array containing drinks' name
string arr2[] = { "Chips Oman","Lays(Chilly)","Lays(Salted)","Doritos","Pringles" };//array containing snacks' name
string arr3[] = { " Snickers","Diary Milk","Bounty","Twix","Galaxy" };//array containing sweets' name
void menu() {//function for the main menu
	cout << "\n================================================= \n";
	cout << "\t\t    WELCOME\t\t\t|";
	cout << "\n================================================= \n";
	cout << "                                                |";
	cout << "\n\tPick your choice for extended menu!     |\n";
	cout << "                                                |";
	cout << " \n 1. Drinks.\t\t\t\t\t|\n 2. Snacks.\t\t\t\t\t|\n 3. Sweets.\t\t\t\t\t|\n 4. Exit.  \t\t\t\t\t|";
	cout << "\n=================================================\n" << endl;
}
void drinkMenu() {//function for the drinks menu (sub menu)
	cout << "\n================================================= \n";
	cout << " \t\t DRINKS MENU \t\t\t|\n";
	cout << "================================================= \n";
	cout << "                                                |";
	cout << "\n1. Pepsi              \t              1.50\t|\n";
	cout << "2. Sprite               \t      1.00\t|\n";
	cout << "3. Chocolate Milk       \t      1.25\t|\n";
	cout << "4. Red Bull             \t      4.00\t|\n";
	cout << "5. Cold Coffee             \t      3.00\t|\n";
	cout << "6. Main Menu           \t\t              \t|";
	cout << "\n=================================================\n" << endl;
}
void snackMenu() {//function for the snacks menu (sub menu)
	cout << "\n================================================= \n";
	cout << " \t\tSNACKS MENU \t\t\t|\n";
	cout << "================================================= \n";
	cout << "                                                |";
	cout << "\n1. Chips Oman     \t\t     0.50\t|\n";
	cout << "2. Lays(Chilly)        \t\t     1.25\t|\n";
	cout << "3. Lays(Salted)        \t\t     1.25\t|\n";
	cout << "4. Doritos            \t\t     2.25\t|\n";
	cout << "5. Pringles           \t\t     2.00\t|\n";
	cout << "6. Main Menu          \t\t\t  \t|";
	cout << "\n=================================================\n" << endl;
}
void sweetMenu() {//function for the sweets menu (sub menu)
	cout << "\n================================================= \n";
	cout << " \t\tSWEETS MENU \t\t\t|\n";
	cout << "================================================= \n";
	cout << "                                                |";
	cout << "\n1. Snickers\t\t           1.50\t\t|\n";
	cout << "2. Diary Milk \t\t           1.25\t\t|\n";
	cout << "3. Bounty\t\t           1.50\t\t|\n";
	cout << "4. Twix\t\t                   1.25\t\t|\n";
	cout << "5. Galaxy\t\t           2.25\t\t|\n";
	cout << "6. Main Menu\t\t\t\t\t|";
	cout << "\n=================================================\n" << endl;
}
int main() {//main 
	while (again == true) {//bool condition - used later to start from top
		menu();
		cout << "\nYour Choice : "; cin >> choices;//asking user input
		while (cin.fail()) {//if the above user input is invalid
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\nInvalid choice, try again: "; cin >> choices;//asking user input again if the first one turns out invalid
		}if (choices == 1) {//if user chooses to purchase drinks
			while (dAgain == true) {//bool condition - used later to start from here
				drinkMenu();//calling function containing the menu
				cout << "\nYour Choice : "; cin >> drink;//asking user input
				do {//starting do...while loop
					if (drink == 1) {//if user selects drink one
						cout << "\nItem : " << arr1[0] << endl;//item name
						cout << "\nYour total : " << four << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= four)) {//checking if the user has enough money to purchase the item
							sum = money - four;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << four << "                          |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                          |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							dAgain = false;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another drink? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									dAgain = true;
									break;
								}
								else {//if the user do not want to continue
									dAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (drink == 2) {//if user selects drink two
						cout << "\nItem : " << arr1[1] << endl;//item name
						cout << "\nYour total : " << two << endl;//shows the price of the item
						cout << "\nInsert Money : ";   cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= two)) {//checking if the user has enough money to purchase the item
							sum = money - two;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << two << "                            |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                            |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another drink? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									dAgain = true;
									break;
								}
								else {//if the user do not want to continue
									cout << "\nThank you for using our services!!!" << endl;
									dAgain = false;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (drink == 3) {//if user selects drink three
						cout << "\nItem : " << arr1[2] << endl;//item name
						cout << "\nYour total : " << three << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= three)) {//checking if the user has enough money to purchase the item
							sum = money - three;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << three << "                         |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                         |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {//if the user likes to make another purchase
								cout << "\n\nWould you like to buy another drink? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {
									dAgain = true;
									break;
								}
								else {//if the user do not want to continue
									cout << "\nThank you for using our services!!!" << endl;
									dAgain = false;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (drink == 4) {//if user selects drink four
						cout << "\nItem : " << arr1[3] << endl;//item name
						cout << "\nYour total : " << eight << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= eight)) {//checking if the user has enough money to purchase the item
							sum = money - eight;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << eight << "                            |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                            |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another drink? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									dAgain = true;
									break;
								}
								else {//if the user do not want to continue
									cout << "\nThank you for using our services!!!" << endl;
									dAgain = false;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							dAgain = false;
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (drink == 5) {//if user selects drink five
						cout << "\nItem : " << arr1[4] << endl;//item name
						cout << "\nYour total : " << sev << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= sev)) {//checking if the user has enough money to purchase the item
							sum = money - sev;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\n\tYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << sev << "                            |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                            |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another drink? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									dAgain = true;
									break;
								}
								else {//if the user do not want to continue
									cout << "\nThank you for using our services!!!" << endl;
									dAgain = false;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (drink == 6) {//if user chooses to go back to main menu
						dAgain = false;
						again = true;
						break;
					}
					else {//if the user input is invalid
						cout << "\nInvalid choice, try again: ";
						drinkMenu();
						cin >> drink;//asking user input
					}
					dAgain = false;
				} while ((drink == 1) || (drink == 2) || (drink == 3) || (drink == 4) || (drink == 5));//ending do...while loop
			}
		}
		else if (choices == 2) {//if user chooses to purchase snacks
			while (snAgain == true) {//bool condition - used later to start from here
				snackMenu();//calling function containing the menu
				cout << "\nYour Choice : "; cin >> snack;//asking user input
				do {//starting do...while loop
					if (snack == 1) {//if user selects snack one
						cout << "\nItem : " << arr2[0] << endl;//item name
						cout << "\nYour total : " << one << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= one)) {//checking if the user has enough money to purchase the item
							sum = money - one;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << one << "                          |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                          |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another snack? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									snAgain = true;
									break;
								}
								else {//if the user do not want to continue
									snAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (snack == 2) {//if user selects snack two
						cout << "\nItem : " << arr2[1] << endl;//item name
						cout << "\nYour total : " << three << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= three)) {//checking if the user has enough money to purchase the item
							sum = money - three;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << three << "                         |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                         |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another snack? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									snAgain = true;
									break;
								}
								else {//if the user do not want to continue
									snAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (snack == 3) {//if user selects snack three
						cout << "\nItem : " << arr2[2] << endl;//item name
						cout << "\nYour total : " << three << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= three)) {//checking if the user has enough money to purchase the item
							sum = money - three;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << three << "                         |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                         |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another snack? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									snAgain = true;
									break;
								}
								else {//if the user do not want to continue
									snAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user does not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (snack == 4) {//if user selects snack four
						cout << "\nItem :" << arr2[3] << endl;//item name
						cout << "\nYour total : " << eight << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= eight)) {//checking if the user has enough money to purchase the item
							sum = money - eight;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << eight << "                            |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                            |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another snack? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									snAgain = true;
									break;
								}
								else {//if the user do not want to continue
									snAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user doesn't have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (snack == 5) {//if user selects snack five
						cout << "\nItem : " << arr2[4] << endl;//item name
						cout << "\nYour total : " << five << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= five)) {//checking if the user has enough money to purchase the item
							sum = money - five;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << five << "                            |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                            |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							snAgain = false;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another snack? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									snAgain = true;
									break;
								}
								else {//if the user do not want to continue
									snAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user doesn't have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (snack == 6) {//if user chooses to go back to main menu
						snAgain = false;
						again = true;
						break;
					}
					else {//if user input is invalid
						cout << "\nInvalid choice, try again: ";
						snackMenu();
						cin >> snack;
					}
				} while ((snack == 1) || (snack == 2) || (snack == 3) || (snack == 4) || (snack == 5));
			}
		}
		else if (choices == 3) {//if user chooses to purchase sweets
			while (sAgain == true) {//bool condition - used later to start from here
				sweetMenu();//calling function containing the menu
				cout << "\nYour Choice : "; cin >> sweet;//asking user input
				do {
					if (sweet == 1) {//if user selects sweet one
						cout << "\nItem : " << arr3[0] << endl;//item name
						cout << "\nYour total : " << four << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= four)) {//checking if the user has enough money to purchase the item
							sum = money - four;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << four << "                          |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                          |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another sweet? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									sAgain = true;
									break;
								}
								else {//if the user do not want to continue
									sAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user doesn't have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (sweet == 2) {//if user selects sweet two
						cout << "\nItem : " << arr3[1] << endl;//item name
						cout << "\nYour total : " << three << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= three)) {//checking if the user has enough money to purchase the item
							sum = money - three;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << three << "                         |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                         |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another sweet? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									sAgain = true;
									break;
								}
								else {//if the user doesn't want to continue
									sAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user do not have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (sweet == 3) {//if user selects sweet three
						cout << "\nItem :" << arr3[2] << endl;//item name
						cout << "\nYour total : " << four << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= four)) {//checking if the user has enough money to purchase the item
							sum = money - four;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << four << "                          |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                          |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another sweet? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									sAgain = true;
									break;
								}
								else {//if the user doesn't want to continue
									sAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user doesn't have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (sweet == 4) {//if user selects sweet four
						cout << "\nItem :" << arr3[3] << endl;//item name
						cout << "\nYour total : " << three << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= three)) {//checking if the user has enough money to purchase the item
							sum = money - three;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << three << "                         |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                         |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another sweet? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									sAgain = true;
									break;
								}
								else {//if the user doesn't want to continue
									sAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user doesn't have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (sweet == 5) {//if user selects sweet five
						cout << "\nItem :" << arr3[4] << endl;//item name
						cout << "\nYour total : " << six << endl;//shows the price of the item
						cout << "\nInsert Money : "; cin >> money;//asking user how much they are gonna pay
						if ((money > 0) && (money >= six)) {//checking if the user has enough money to purchase the item
							sum = money - six;//to calculate balance
							cout << "\nBalance given back : " << sum << endl;
							cout << "\nYour item has been dispensed!Enjoy your purchase!!";
							cout << "\n\n=================================================\n";
							cout << "\t\tRECEIPT                                      \n";
							cout << "=================================================";
							cout << "\n                                                |";
							cout << "\n\tCost     : " << six << "                         |";
							cout << "\n\tPaid     : " << money << "                            |";
							cout << "\n\t---------------\t\t\t\t|\n";
							cout << "\tBalance  : " << sum << "                         |";
							cout << "\n                                                |";
							cout << "\n=================================================\n" << endl;
							if (sum >= 0) {
								cout << "\n\nWould you like to buy another sweet? (y/n) : "; cin >> say;//asking user input
								if (say == 'y') {//if the user likes to make another purchase
									sAgain = true;
									break;
								}
								else {//if the user doesn't want to continue
									sAgain = false;
									cout << "\nThank you for using our services!!!" << endl;
									break;
								}
							}
						}
						else {//if the user doesn't have enough money
							cout << "\nNot enough money to buy this item!!" << endl;
							break;
						}
					}
					else if (sweet == 6) {//if user chooses to go back to main menu
						sAgain = false;
						again = true;
						break;
					}
					else {//if user inputs invalid input
						cout << "\nInvalid choice, try again: ";//output message
						sweetMenu(); cin >> sweet;//displays sweets menu
					}
				} while ((sweet == 1) || (sweet == 2) || (sweet == 3) || (sweet == 4) || (sweet == 5));//ending do...while loop 
			}
			sAgain = false;//to prevent looping
		}
		else if (choices == 4) {//if user chooses to quit program
			cout << "\nThank you for using our services!!!" << endl;//thanking the user for choosing our service
			break;
		}
		else {
			cout << "\nInvalid choice, try again? (y/n) : "; cin >> ans;//asking user input
			if (ans == 'y') {//if user inputs invalid input and wants to go back to the start
				again = true;
			}
			else {//if user inputs invalid input and do not want to continue the program
				again = false;
				cout << "\nThank you for using our services!!!" << endl;//thanking the user for choosing our service
			}
		}
		cout << "\n\nWould you like to go back to the main menu?(y/n) : "; cin >> ans;//asking user input
		if (ans == 'y') {
			cout << "\n\nMAIN MENU : \n" << endl; again = true;
		} //if user wants to go back to the main menu
		else if (ans == 'n') { //if user wants to quit program
			again = false; cout << "\nThank you for using our services!!!" << endl;
		} //end output/message and thanking the user for choosing our service
		else {
			break;
			cout << "INPUT NOT RECOGNISED!!!" << endl;
		}
	}
	return 0;
}