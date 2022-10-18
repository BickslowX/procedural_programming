#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int task;
    cout << " Chose the task number(1-9)\n";
    cin >> task;
    cin.ignore(10000, '\n');
    cout << "\n";
    switch (task)
    {
    case 1://1
    {
        char a[26];
        int temp = 97;
        for (int i = 0; i <= 25;i++)
        {
            a[i] = (char)temp;
            cout << a[i]<<" ";
            temp++;
        }
        break;
    }
    case 2://2
    {
        int temp = 0;
        for (int i = 0;i < 5;i++)
        {
            for(int j=0;j<=i;j++)
                cout << "^";
            cout << "\n";
            temp++;
        }
        break;
    }
    case 3://3
    {
        static int temp = 70;
        for (int i = 0; i <6;i++)
        {
            for (int j = 0;j <= i;j++)
                cout << (char)(temp - j);
            cout << "\n";
        }
        break;
    }
    case 4://4
    {
        int temp = 65;
        for (int i = 0; i < 6;i++)
        {
            for (int j = 0;j <= i;j++)
            {
                cout << (char)(temp);
                temp++;
            }
            cout << "\n";
        }
        break;
    }
    case 5://6
    {
            cout << " Input lower bound\n";
            int low;
            cin >> low;
            cout << " Input upper bound\n";
            int up;
            cin >> up;
            for (int i = low; i <= up;i++)
                cout << i << "\t" << i * i << "\t" << i * i * i << "\n";
        break;
    }
    case 6://11
    {
        cout << " Input eight integers(with Enter) \n";
        int str [8];
        for (int i = 0;i < 8;i++)
            cin >> str[i];
        for (int i = 8; i > 0;i--)
            cout << str[i - 1];
        break;
    }
    case 7://13
    {
        int str[8];
        for (int i = 0;i < 8;i++)
        {
            str[i] = 2;
        }
        for (int i = 2;i <= 8;i++)
        {
            for (int j = 0;j < i;j++)
                str[i - 1] *= 2;
        }
        int temp = 0;
        do
        {
            cout << str[temp]<<"\n";
            temp++;
        } while (temp < 8);
        break;
    }
    case 8://17
    {
        int a = 1000000;
        int years = 0;
        while (a > 0)
        {
            a += a * 0.08;
            a -= 100000;
            years++;
        }
        cout << years;
        break;
    }
    case 9://16
    {
        int da = 100;
        int de = 100;
        int years = 0;
        while (da >= de)
        {
            da += 10;
            de += de * 0.05;
            years++;
        }
        cout << " Daphne - " << da << "\n Deirdre - " << de << "\n Years - " << years;
        break;
    }
    }
}