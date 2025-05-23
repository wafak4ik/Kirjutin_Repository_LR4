#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int prov(int& num1)
{
	while (true)
	{
		cin >> num1;
		if (!cin)
		{
			cout << "Error. Enter the correct data type." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else break;
	}
	cout << " " << endl;
    cout << "You entered: " << num1 << endl;
	cout << " " << endl;
	return num1;
}

int prov(double& num1)
{
	while (true)
	{
		cin >> num1;
		if (!cin)
		{
			cout << "Error. Enter the correct data type." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else break;
	}
	cout << " " << endl;
    cout << "You entered: " << num1 << endl;
	cout << " " << endl;
	return num1;
}

double task1()
{

}

int task2()
{
    
}

void task3()
{

}

void task4()
{

}

int main() 
{
    double x;
    int h;
    int A;

    while(true)
    {
        /* - ввести натуральное число X
- ввести цифру A
- верно ли, что в числе X нет данной цифры А
-верно ли, что в числе X цифра А встречается более двух раз */
        cout << "=====================================================================================================" << endl;
        cout << "Welcome. Please, enter the number of task you wanna run or enter 0, if you wanna exit the program." << endl;
        cout << "1 - enter the real number x" << endl;
        cout << "2 - enter A" << endl;
        cout << "3 - x don't contains A" << endl;
        cout << "4 - x contains A more than 2 times" << endl;
        cout << "=====================================================================================================" << endl;
        
        cout << "Your choice: ";
        prov(h);

        switch(h)
        {
            case 0:
                cout << "Shutting down the program. Goodbye!" << endl;
                cout << " " << endl;
                return 0;
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                cout << "Integer part of the sum: " << task4(x, y, z) << endl;
                cout << " " << endl;
                break;
            default:
                cout << "Invalid option. Please enter a valid number." << endl;
                cout << " " << endl;
                break;
        }
    }
}
