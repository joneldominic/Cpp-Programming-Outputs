//Digit Power Sum
//Jonel Dominic Tapang
#include <iostream>
#include <cmath>
using namespace std;

int getDigitSum(int num);
bool isDPS(int num);
void display();

int main()
{
    display();
    return 0;
}

int getDigitSum(int num)
{
    int sum = 0;

    while(num!=0)
    {
        sum += num%10;
        num /= 10;
    }

    return sum;
}

bool isDPS(int num)
{
    int dSum = getDigitSum(num);
    int dPow = 0;
    int poww = 1;

    if(dSum==1)
    {
        return false;
    }

    while(dPow<=num)
    {
        if(dPow==num)
        {
            return true;
        }

        dPow = 0;
        dPow = pow(dSum,poww);
        poww++;
    }

    return false;
}

void display()
{
    int number= 10;

    while(number <= 65535)
    {
        if(isDPS(number))
        {
            cout<<number<<", ";
        }

        number++;
    }
}
