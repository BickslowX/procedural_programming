#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void cubeNprint(double a)
{
    double b;
    b = round(pow(a, 3) * 100) / 100;
    cout << " " << a << "^3 = " << b;
    return;
}
void Temperatures(double Fahrenheit)
{
    const double cons1 = 5.0 / 9.0;
    const double cons2 = 32.0;
    const double cons3 = 273.16;
    cout << " Fahrenheit = " << round(Fahrenheit * 100) / 100 << ";\t Celsius = " << round((cons1 * (Fahrenheit - cons2)) * 100) / 100 << ";\t Kelvin = " << round(((cons1 * (Fahrenheit - cons2)) + cons3) * 100) / 100 << ";\n";
}
bool isNumeric(string str)
{
    int counter = 0;
    while (counter < str.length())
    {
        if (isdigit(str[counter]) == 0 && str[counter] != '.')
        {
            return 0;
        }
        counter++;
    }
    return 1;
}
int main()
{
    int task;
    cout << " Chose the task number(1-9)\n";
    cin >> task;
    cin.ignore(10000, '\n');
    switch (task)
    {
    case 1:
    {
        bool f = true;
        const int h = 60;
        while (f == true)
        {
            cout << " Enter minutes(<=0 to quit)\n";
            int temph;
            cin >> temph;
            cin.ignore(10000, '\n');
            if (temph <= 0)
            {
                cout << " Done";
                break;
            }
            cout << temph / h << " hour(s), " << temph % h << " minute(s)";
        }
        break;
    }
    case 2:
    {
        bool f = true;
        while (f == true)
        {
            cout << " Enter integer:";
            int temp;
            cin >> temp;
            cin.ignore(10000, '\n');
            cout << "\n";
            if (temp <= 0)
            {
                cout << " Done";
                break;
            }
            for (int i = 0;i <= 10; i++)
            {
                cout << temp + i << "\t";
            }
            cout << "\n\n";
        }
        break;
    }
    case 3:
    {
        bool f = true;
        const int h = 7;
        while (f == true)
        {
            cout << " Enter days\n";
            int temph;
            cin >> temph;
            cin.ignore(10000, '\n');
            if (temph <= 0)
            {
                cout << " Done";
                break;
            }
            cout << temph << " day(s) are " << temph / h << " week(s), " << temph % h << " day(s)\n";
        }
        break;
    }
    case 4:
    {
        bool f = true;
        const double h = 30.48;
        while (f == true)
        {
            cout << " Enter a height in centimeters (<=0 to quit):";
            double temph;
            cin >> temph;
            cin.ignore(10000, '\n');
            if (temph <= 0)
            {
                f = false;
                break;
            }
            cout << " " << temph << " cm =  " << floor(temph / h) << " feet, " << round(((temph / 2.54) - (floor(temph / h)) * 12) * 10) / 10 << " inches\n";
        }
        cout << " Bye";
        break;
    }
    case 5:
    {
        cout << " How far the calculation should proceed(number): ";
        int num;
        cin >> num;
        int sum = 0;
        for (int i = 0; i <= num;i++)
            sum += i;
        cout << " Sum = " << sum;
        break;
    }
    case 6:
    {
        cout << " How far the calculation should proceed(number): ";
        int num;
        cin >> num;
        int sum = 0;
        for (int i = 0; i <= num;i++)
            sum += pow(i, 2);
        cout << " Sum = " << sum;
        break;
    }
    case 7:
    {
        cout << " Enter type double number\n";
        double value;
        cin >> value;
        cin.ignore(10000, '\n');
        cubeNprint(value);
        break;
    }
    case 8:
    {
        cout << " This program computes modules\n";
        cout << " Enter an integer to serve as the second operand: ";
        int second;
        cin >> second;
        cin.ignore(10000, '\n');
        cout << " Now enter the first operand: ";
        int first;
        cin >> first;
        cin.ignore(10000, '\n');
        cout << " " << first << "%" << second << " is " << first % second << "\n";
        bool f = true;
        while (f == true)
        {
            cout << "\n Enter next number for first operand (<= 0 to quit):";
            cin >> first;
            cin.ignore(10000, '\n');
            if (first <= 0)
            {
                cout << " Done";
                break;
            }
            cout << " " << first << " % " << second << " is " << first % second;
        }
        break;
    }
    case 9:
    {
        bool f = true;
        while (f == true)
        {
            cout << "\n Enter a Fahrenheit temperature: ";
            string tempFahr;
            cin >> tempFahr;
            if (isNumeric(tempFahr) == 0)
            {
                cout << " Done";
                break;
            }
            double fahrenheit = stod(tempFahr);
            Temperatures(fahrenheit);
        }
        break;
    }
    }
}
