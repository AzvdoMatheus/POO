#include "Classes.h"

void Client::showDetails(){
  cout << cpf << " - " << birth_Date << " - " << name << endl;
}

void Ticket::showDetails(){
  cout << "Price: " << price << endl;
  cout << "Payment Method: " << payment_Method << endl;
}

void Movie::showDetails(){
  cout << "Movie: " << movie_Name << endl;
  cout << "Language: " << language << endl;
}

void Session::showDetails(){
  cout << "Date: " << date << " - " << "Time: " << time << endl;
}

string Client::Getcpf(){
  return cpf;
}

string Client::Getbirth_Date(){
  return birth_Date;
}

string Client::Getname(){
  return name;
}

void Client::Setcpf(string c){
  cpf = c;
}

void Client::Setbirth_Date(string b){
  birth_Date = b;
}

void Client::Setname(string n){
  name = n;
}

