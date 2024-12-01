#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price; // declaration
  if (person == 1) { //base case in start of function it checks this everytime
    price = 100;
    return price;
  } 
  else { //if person is not 1 then it will
    //this can also be called first half of function aka when function is not =1 this will run 
    cout << "Person " << person << " is asking price" << endl;
    person--; //say it is asking price then decrement
    //when person finally is 1 is goes back to the first call of the initial recursion and prints this half of the function
    price = ticket_price(person); //recall function over again until person is 1
    cout << "Person " << person << " is telling price" << endl;
    return price;
  }
}

int main() {
  int price;
  price = ticket_price(5);
  cout << "Ticket price = " << price << endl;

}