// лаба1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "fraction.h"
#include "matrix.h"
#include "polynomial.h"
#include <iostream>
#include <cstdio>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	/*
	fraction<int> ifr, ifr2;
	
	try
	{
		//fraction<int> fu(0,0);
		cin >> ifr;
		cin >> ifr2;
	}
	catch (const std::invalid_argument& err)
	{
		cout << err.what() << endl;
		exit(0);
	}
	

	cout << ifr << " + " << ifr2 << " = " << ifr + ifr2 << endl;
	cout << ifr << " - " << ifr2 << " = " << ifr - ifr2 << endl;
	cout << ifr << " * " << ifr2 << " = " << ifr * ifr2 << endl;
	
	try
	{
		cout << ifr << " / " << ifr2 << " = " << ifr / ifr2 << endl;
	}
	catch (const std::invalid_argument& err)
	{
		cout << err.what() << endl;
		exit(0);
	}
	
	cout << ifr << " / 5 "  << " = " << ifr / 5 << endl;
	cout << " 5  /" << ifr << " = " << 5 / ifr << endl;
	ifr = 9;
	cout << ifr << endl;
	ifr += ifr;
	cout << ifr << endl;
	*/

	/*fraction<int> fr3;
	fr3 = ifr2;
	cout << fr3 << endl; */

	//const int dim = 3;
	//matrix<dim, char> imatr, imatr2;
	
	 /*
	matrix<3, int> imatr, imatr2;

	matrix<3, int> imatr3;
	//imatr3 = imatr + imatr2 * imatr;

	try
	{
		cin >> imatr;
		//cin >> imatr2;
		cout << imatr << endl;
		cout << imatr2 << endl;
		cout << imatr + imatr2 << endl;
		cout << imatr - imatr2 << endl;
		cout << imatr * imatr2 << endl;
		cout << imatr.det() << endl;

		cout << "rrr" << endl;
		cout << imatr.rev() << endl;
		
		// вывод через вектор
		int size = imatr.getdim();
		vector<vector<float>> print(size);
		for (int i = 0; i < size; i++)
			print[i].resize(size);

		print = imatr.revf();
		
		for (int i = 0; i < print.size(); i++)
		{
			for (int j = 0; j < print[i].size(); j++)
				cout << print[i][j] << ' ';

				cout << '\n';
		} 

		//cout << imatr2.det() << endl;
	}
	catch (const std::invalid_argument& ex)
	{
		cout << ex.what() << endl;
	}
	 */

	/*
	matrix<int> imatr3(dim);
	imatr3 = imatr2 + imatr2;
	cout << imatr3 << endl;
	*/
	
	// fraction<int> fr;
	// cin >> fr;
	// matrix<2, int> mtr;
	// cin >> mtr;
	//polynomial<matrix<2, fraction<int>>> pol, pol2;

	/* matrix<2, fraction<int>> mtr1, mtr2;
	cin >> mtr1 >> mtr2;
	try
	{
		cout << mtr1 / mtr2;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		// exit(0);
	}
	*/

	// polynomial<matrix<2, int>> pol, pol2;
	polynomial<int> pol, pol2;
	matrix<2, int> mtr1, mtr2;

	try
	{
		cin >> mtr1 >> mtr2;
		cout << mtr1 << mtr2;
		cout << "определитель: " << mtr2.det() << endl;
		cout << ": " << mtr2.rev() << endl;


		/*
		cin >> pol;
		cin >> pol2;
		cout << pol << endl;
		cout << pol2 << endl;

		cout << pol + pol2 << endl;
		cout << pol - pol2 << endl;
		cout << pol * pol2 << endl;
		cout << pol.differ() << endl;
		cout << pol / pol2 << endl;
		cout << pol % pol2 << endl;
		*/
		// cout << pol / pol2 << endl;
		
		cout << endl << mtr1 / mtr2;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}


    return 0;
}