#include <iostream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <string>

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
	cout << "=====================================================================================================" << endl;
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

double task1(double& x)
{
    cout << "Enter a real number x (No more than 15 characters after the dot):" << endl;
    cout << " " << endl;
    prov(x);
    return x;
}

int task2(int& A)
{
    cout << "Enter A:" << endl;
    cout << " " << endl;
    prov(A);
    return A;
}

bool task3(bool& y, double& x, int& A)
{   
    string str = to_string(abs(x));
    char target = '0' + A;
    
    if (count(str.begin(), str.end(), target) == 0)
    {
        y = true;
    }
    
    return y;
}

bool task4(bool& z, double& x, int& A)
{
    string str = to_string(abs(x));
    char target = '0' + A;
    
    if (count(str.begin(), str.end(), target) > 2)
    {
        z = true;
    }

    return z;
}

int main() 
{
    bool y, z;
    double x;
    int h;
    int A;

    while(true)
    {
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
                cout << "=====================================================================================================" << endl;
                return 0;
            case 1:
                task1(x);
                break;
            case 2:
                task2(A);
                break;
            case 3:
                task3(y, x, A);
                if (y == true)
                {
                    cout << x << " doesn't contain " << A << endl;
                }
                else
                {
                    cout << x << " contains " << A << endl;
                }
                break;
            case 4:
                task4(z, x, A);
                if (z == true)
                {
                    cout << x << " contains " << A << " more than two times" << endl;
                }
                else
                {
                    cout << x << " doesn't contain " << A << " more than two times" << endl;
                }
                break;
            default:
                cout << "Invalid option. Please enter a valid number." << endl;
                cout << " " << endl;
                break;
        }
    }
}
