#include <iostream>
using namespace std;

class Client{
  private:
    string cpf;
    string birth_Date;
    string name; 

  public:
    string Getcpf();
    string Getbirth_Date();
    string Getname();

    void Setcpf(string c);
    void Setbirth_Date(string b);
    void Setname(string n);

  void showDetails();
};
  
class Ticket{
  public:
    double price;
    string payment_Method;

  void showDetails();
};

class Movie{
  public:
    string language;  
    string movie_Name;

  void showDetails();
};

class Session{
  public:
    string time;
    string date;

  void showDetails();
};



