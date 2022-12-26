#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int choice1;
  char menu1, menu2, menu3;
  double total;


  while (choice1 != 4) {
    //first menu choice
    cout << "Welcome to my Coffee Shop!" << endl;
    cout << "Please pick an option below:" << endl;
    cout << "1. Donuts/Muffins/Pastries" << endl;
    cout << "2. Bagels/Toast" << endl;
    cout << "3. Coffee/Tea" << endl;
    cout << "4. Quit" << endl;

    cin >> choice1;

    //data validation for choice1
    while(!cin) {
      cout << "Invalid option! Please choose 1-4!" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cin >> choice1;
      }
    while ((choice1 < 1) || (choice1 > 4)) {
      cout << "Invalid option! Please choose 1-4!" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cin >> choice1;
      while(!cin) {
        cout << "Invalid entry! Please try again!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> choice1;
        }
      }

    //when user chosses option 1

    if (choice1 == 1) {
      bool success;
      do {
            
        cout << "Would you like" << endl;
        cout << "D: Donuts $4.00" << endl;
        cout << "M: Muffins $4.50" << endl;
        cout << "P: Pastries $5.50" << endl;
        cout << fixed << setprecision(2);

        cin >> menu1;
        menu1 = tolower(menu1);
          if (menu1 == 'd') {
            total += 4.00;
            success = true;
          } 
          else if (menu1 == 'm') {
            total += 4.50;
            success = true;
          } 
          else if (menu1 == 'p') {
            total += 5.50;
            success = true;
          } 
          else {
            cout << "Invalid Option!" << endl;
            success = false;
          } 
        } while (success == false);
        cout << total << endl;
    }
    else if (choice1 ==2) {
      bool success;
      do {
            
      cout << "Would you like" << endl;
      cout << "B: Bagels $3.75" << endl;
      cout << "T: Toast $2.25" << endl;
      cout << fixed << setprecision(2);

      cin >> menu2;
      menu1 = tolower(menu2);
        if (menu1 == 'b') {
        total += 3.75;
          success = true;
        } 
        else if (menu1 == 't') {
          total += 2.25;
          success = true;
        } 
        else {
          cout << "Invalid Option!" << endl;
          success = false;
         
        } 
      } while (success == false);
      cout << "$" << total << endl;
    }
    else if (choice1 ==3) {
      bool success;
      do {
            
      cout << "Would you like" << endl;
      cout << "C: Coffee $3.50" << endl;
      cout << "T: Tea $2.50" << endl;
      cout << fixed << setprecision(2);

      cin >> menu3;
      menu1 = tolower(menu3);
        if (menu1 == 'c') {
        total += 3.50;
          success = true;
        } 
        else if (menu1 == 't') {
          total += 2.50;
          success = true;
        } 
        else {
          cout << "Invalid Option!" << endl;
          success = false;
         
        } 
      } while (success == false);
      cout << "$" << total << endl;
    }
  }
    


    
  }
  

  return 0;
}
