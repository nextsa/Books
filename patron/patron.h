#ifndef PATRON_H
#define PATRON_H
 
#include <string>
#include <iostream>

using namespace std;
 
class Patron
{
    string name;
    int cardNumber;
    int fee;
    bool Paid_a_fee;
 
public:
    Patron();
    
    //did a person pay a fee or not
    void set_Pay_or_not(const bool& a); 
    bool did_pay_or_not() const;
 
    int getCardNumber() const;
    void setCardNumber(int value);
    int getFee() const;
    void setFee(int value);
};
 
#endif // PATRON_H
