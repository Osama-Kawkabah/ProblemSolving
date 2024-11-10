#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"

class clsInputValidate
{

public:
	// ÏæÇá ááÊÍÞÞ ãä ÕÍÉ ÇáÃÑÞÇã Èíä äØÇÞ ãÍÏÏ
	static bool IsNumberBetween(short Number, short From, short To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}

	static bool IsNumberBetween(int Number, int From, int To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;

	}

	static bool IsNumberBetween(float Number, float From, float To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}

	static bool IsNumberBetween(double Number, double From, double To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}

	// ÏÇáÉ ááÊÍÞÞ ãä ÕÍÉ ÇáÊÇÑíÎ Èíä ÊÇÑíÎíä ãÍÏÏíä
	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		//Date>=From && Date<=To
		if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			&&
			(clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			)
		{
			return true;
		}

		//Date>=To && Date<=From
		if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			&&
			(clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			)
		{
			return true;
		}

		return false;
	}

	// ÏÇáÉ áÞÑÇÁÉ ÚÏÏ ÕÍíÍ ãä ÇáãÏÎá ãÚ ÇáÊÍÞÞ ãä ÕÍÊå
	static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		int Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	// ÏÇáÉ áÞÑÇÁÉ ÚÏÏ ÕÍíÍ Èíä äØÇÞ ãÍÏÏ ãÚ ÇáÊÍÞÞ ãä ÕÍÊå
	static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		int Number = ReadIntNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber();
		}
		return Number;
	}

	// ÏÇáÉ áÞÑÇÁÉ ÚÏÏ ÚÔÑí ãä ÇáãÏÎá ãÚ ÇáÊÍÞÞ ãä ÕÍÊå
	static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		double Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	// ÏÇáÉ áÞÑÇÁÉ ÚÏÏ ÚÔÑí Èíä äØÇÞ ãÍÏÏ ãÚ ÇáÊÍÞÞ ãä ÕÍÊå
	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		double Number = ReadDblNumber();

		while (!IsNumberBetween(Number, From, To)) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}
	
	// ÏÇáÉ ááÊÍÞÞ ãä ÕÍÉ ÇáÊÇÑíÎ
	static bool IsValideDate(clsDate Date)
	{
		return	clsDate::IsValidDate(Date);
	}

};

