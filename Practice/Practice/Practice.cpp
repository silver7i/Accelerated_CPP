// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	{
		std::cout << "Hello, Wrold!" << std::endl;

		std::cout << "This (\") is a quote, and this (\\) is a backslash." << std::endl;

		std::cout << "=============\t=============" << std::endl;

		std::cout << "Please enter your first name : ";
		std::string name;
		std::cin >> name;

		const std::string Greeting = "Hello, " + name + "!";

		const std::string Spaces(Greeting.size(), ' ');
		const std::string Second = "* " + Spaces + " *";

		const std::string First(Second.size(), '*');

		const std::string Third = "* " + Greeting + " *";

		std::cout << First << std::endl;
		std::cout << Second << std::endl;
		std::cout << Third << std::endl;
		std::cout << Second << std::endl;
		std::cout << First << std::endl;
	}
	*/
	/*
	{
		const std::string s = "a string";

		{
			const std::string x = "another string";
			std::cout << s << std::endl;
			std::cout << x << std::endl;
		};
	}
	*/
	
	// 2-3
	/*
	{
		std::cout << "Whar is your name? ";
		std::string name;
		std::cin >> name;

		cout << endl;

		const string Greeting = "Hellow " + name + "!";

		unsigned int RowsPad;
		unsigned int ColumnsPad;
		cout << "Input Row Pad Size : ";
		cin >> RowsPad;
		cout << "Input Column Pad Size : ";
		cin >> ColumnsPad;


		const int Rows = RowsPad * 2 + 3;
		const string::size_type Columns = Greeting.size() + ColumnsPad * 2 + 2;
	
		for (int r = 0; r != Rows; ++r)
		{
			string::size_type c = 0;
			while (c != Columns)
			{
				if (r == RowsPad + 1 && c == ColumnsPad + 1)
				{
					cout << Greeting;
					c += Greeting.size();
				}
				else
				{
					if (r == 0 || r == Rows - 1 || c == 0 || c == Columns - 1)
					{
						cout << "*";
					} 
					else
					{
						cout << " ";
					}
					++c;
				}
			}

			cout << endl;
		}
	}
	*/

	// 2-4
	/*
	{
		for (int r = 0; r != Rows; ++r)
		{
			string::size_type c = 0;
			string result;
			while (c != Columns)
			{
				if (r == RowsPad + 1 && c == ColumnsPad + 1)
				{
					result += Greeting;
					c += Greeting.size();
				}
				else
				{
					if (r == 0 || r == Rows - 1 || c == 0 || c == Columns - 1)
					{
						result += "*";
					}
					else
					{
						result += " ";
					}
					++c;
				}
			}
			cout << result;

			cout << endl;
		}
	}
	*/

	// 2-5
	/*
	{
		int Rows = 5;
		int Columns = 5;

		// square
		for (int row = 0; row != Rows; ++row)
		{
			string result;
			for (int column = 0; column != Columns; ++column)
			{
				if (row == 0 || row == Rows - 1 || column == 0 || column == Columns - 1)
				{
					result += "* ";
				}
				else
				{
					result += "  ";
				}
			}
			cout << result << endl;
		}

		cout << endl;

		// oblong
		Columns = 3;
		for (int row = 0; row != Rows; ++row)
		{
			string result;
			for (int column = 0; column != Columns; ++column)
			{
				if (row == 0 || row == Rows - 1 || column == 0 || column == Columns - 1)
				{
					result += "* ";
				}
				else
				{
					result += "  ";
				}
			}
			cout << result << endl;
		}

		cout << endl;

		// triangle
		int size = 5;

		for (int row = 0; row != size; ++row)
		{
			for (int column = 0; column != 2 * size - 1; ++column)
			{
				if (column < size - row - 1 || column > size + row - 1)
				{
					cout << " ";
				}
				else
				{

					cout << "*";
				}
			}
			cout << endl;
		}
	}
	*/

	// 2-6
	/*
	{
		int i = 0;
		while (i < 10) {
			i += 1;
			cout << i << endl;
		}
	}
	*/

	// 2-7
	/*
	{
		for (int i = 10; i > -6; --i)
		{
			cout << i << endl;
		}
	}
	*/

	// 2-8
	/*
	{
		int result = 1;
		for (int i = 1; i < 10; ++i)
		{
			result *= i;
			cout << result << endl;
		}
	}
	*/

	// 2-9
	/*
	{
		int BigNum = 0;
		int SmallNum = 0;
		cout << "Input first Num : ";
		cin >> BigNum;
		cout << "Input Second Num : ";
		cin >> SmallNum;

		if (BigNum < SmallNum)
		{
			int tmp = BigNum;
			BigNum = SmallNum;
			SmallNum = BigNum;
		}

		cout << BigNum << " is bigger than " << SmallNum << endl;
	}
	*/
	

	return 0;
}