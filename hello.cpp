/* Some readme */

#include <iostream>
using namespace std;


class Calculator
{
private:
    /* data */
public:
    Calculator(/* args */){};
    ~Calculator(){};
    void PrimeGenerator(int x, int y);

};

int main (int argc, char const *argv[])
{
    cout << "Please enter two numbers" << endl;
    Calculator calculator;
    int x, y;
    cin >>x>>y;
    calculator.PrimeGenerator(x,y);
    cin.ignore();
    cin.get();

    return 0; 
}

void Calculator::PrimeGenerator(int x, int y){
    cout << x << " " << y << endl;
}