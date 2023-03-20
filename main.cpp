#include "Classes.h"

int main(){

  int i = 0; 
  Client c1[5];
  Ticket t1[5];
  Session ss1[5];
  Movie m1[5];

  string apoioString;

  for ( i = 0; i < 5; i++){ 
    
    cout << "\n\n-------New client-------\n\n";
    cout << "|Client informations|\n";
    cout << "Name: ";
    cin >> apoioString; 
    c1[i].Setname(apoioString);
    cout << "Client cpf: ";
    cin >> apoioString;
    c1[i].Setcpf(apoioString);
    cout << "Birth date: ";
    cin >> apoioString;
    c1[i].Setname(apoioString);

    cout << "\n\n|Ticket informations|\n\n";
    cout << "Price: ";
    cin >> t1[i].price;
    cout << "Payment method: ";
    cin >> t1[i].payment_Method;

    cout << "\n\n|Movie informations|\n\n";
    cout << "Date: ";
    cin >> ss1[i].date;
    cout << "Time: ";
    cin >> ss1[i].time;
    cout << "Title: ";
    cin >> m1[i].movie_Name;
    cout << "Language: ";
    cin >> m1[i].language;
  }

  for ( i = 0; i < 5; i++){
    c1[i].showDetails();
    t1[i].showDetails();
    ss1[i].showDetails();
    m1[i].showDetails();
  }
}