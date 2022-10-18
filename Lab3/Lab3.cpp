#include <iostream>
#include <cmath>
#include <string>
using namespace std;

static void PrintChar(char a, int row, int collumn)
{
    for (int i = 0; i < collumn; i++)
    {
        for (int j = 0;j < row;j++)
        {
            cout << a;
        }
        cout << "\n";
    }
}
static double HarmMean(double a, double b)
{
    double c = 1 / (((1 / a) + (1 / b)) / 2);
    return c;
}
static void larger_of(double& a, double& b)
{
    a = max(a, b);
    b = a;
}
static void task6(double& a, double& b, double& c)
{
    double tempA,tempC;
    tempA = min(min(a, b), c);
    tempC = max(max(a, b), c);
    if(a!=min(min(a,b),c)&&a!=max(max(a,b),c))
        b = a;
    else if (c != min(min(a, b), c) && c != max(max(a, b), c))
        b = c;
    a = tempA;
    c = tempC;
}
static int Alph(char c)
{
    if (!isalpha(c))
        return -1;
    c = (char)tolower(c);
    return abs(97 - (int)c)+1;
}
static void fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    cout << " Fibonacci num 1 = 1\n";
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << " Fibonacci num " << i << " = " << b<<"\n";
    }
}
int main()
{
    int task;
    cout << " Chose the task number(1-7)\n";
    cin >> task;
    cin.ignore(10000, '\n');
    cout << "\n";
    switch (task)
    {
    case 1://1
    {
        cout << "Input first value:\n";
        double first;
        cin >> first;
        cout << "\nInput second value:\n";
        double second;
        cin >> second;
        cout << min(first, second) << " is smaller, then " << max(first, second);
        break;
    }
    case 2://3
    {
        cout << "Input character:\n";
        char ch;
        cin >> ch;
        cout << "Input first value:\n";
        double first;
        cin >> first;
        cout << "\nInput second value:\n";
        double second;
        cin >> second;
        PrintChar(ch, first, second);
        break;
    }
    case 3://4
    {
        cout << "Input first value:\n";
        double first;
        cin >> first;
        cout << "\nInput second value:\n";
        double second;
        cin >> second;
        cout << HarmMean(first,second);
        break;
    }
    case 4://5
    {
        cout << "Input first value:\n";
        double first;
        cin >> first;
        cout << "\nInput second value:\n";
        double second;
        cin >> second;
        larger_of(first, second);
        cout << "\nFirst = " << first << " Second = " << second;
        break;
    }
    case 5://6
    {
        cout << "Input first value:\n";
        double first;
        cin >> first;
        cout << "\nInput second value:\n";
        double second;
        cin >> second;
        cout << "\nInput third value:\n";
        double third;
        cin >> third;
        task6(first, second, third);
        cout << "\nFirst = " << first << " Second = " << second << " Third = " << third;
        break;
    }
    case 6://7
    {
        cout << "Write characters:\n";
        string charact;
        cin >> charact;
        for (int i = 0;i < charact.length();i++)
            cout << " " << charact[i] << " -- " << Alph(charact[i]) << "\n";
        break;
    }
    case 7://11 
    {
        cout << "Enter the serial number of a number of the Fibonacci sequence:";
        int num;
        cin >> num;
        fibonacci(num);
        break;
    }
    }
}