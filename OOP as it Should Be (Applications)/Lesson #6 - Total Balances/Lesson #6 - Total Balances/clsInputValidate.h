#pragma once // ÊÃßÏ ãä ÊÖãíä åĞÇ Çáãáİ ãÑÉ æÇÍÏÉ İŞØ İí äİÓ Çáãáİ
#include <iostream> // ãßÊÈÉ ÃÓÇÓíÉ áÚãáíÇÊ ÇáÅÏÎÇá æÇáÅÎÑÇÌ
#include <string> // ãßÊÈÉ ÃÓÇÓíÉ áÚãáíÇÊ ÇáÓáÇÓá
#include "clsString.h" // ÊÖãíä ãáİ ÇáÑÃÓ ÇáĞí íÍÊæí Úáì æÙÇÆİ ãÓÇÚÏÉ áÚãáíÇÊ ÇáÓáÇÓá
#include "clsDate.h" // ÊÖãíä ãáİ ÇáÑÃÓ ÇáĞí íÍÊæí Úáì æÙÇÆİ ãÓÇÚÏÉ áÚãáíÇÊ ÇáÊæÇÑíÎ

class clsInputValidate
{

public:

	// ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÏÇÎá ÇáäØÇŞ ÇáãÍÏÏ
	static bool IsNumberBetween(short Number, short From, short To)
	{
		if (Number >= From && Number <= To)
			return true; // ÅĞÇ ßÇä ÇáÑŞã ÏÇÎá ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÕÍíÍ
		else
			return false; // ÅĞÇ ßÇä ÇáÑŞã ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÎØÃ
	}

	// ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÏÇÎá ÇáäØÇŞ ÇáãÍÏÏ
	static bool IsNumberBetween(int Number, int From, int To)
	{
		if (Number >= From && Number <= To)
			return true; // ÅĞÇ ßÇä ÇáÑŞã ÏÇÎá ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÕÍíÍ
		else
			return false; // ÅĞÇ ßÇä ÇáÑŞã ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÎØÃ
	}

	// ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÏÇÎá ÇáäØÇŞ ÇáãÍÏÏ
	static bool IsNumberBetween(double Number, double From, double To)
	{
		if (Number >= From && Number <= To)
			return true; // ÅĞÇ ßÇä ÇáÑŞã ÏÇÎá ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÕÍíÍ
		else
			return false; // ÅĞÇ ßÇä ÇáÑŞã ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÎØÃ
	}

	// ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÊÇÑíÎ Èíä ÇáÊæÇÑíÎ ÇáãÍÏÏÉ
	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		// Date>=From && Date<=To
		if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			&&
			(clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			)
		{
			return true; // ÅĞÇ ßÇä ÇáÊÇÑíÎ Èíä ÇáÊæÇÑíÎ ÇáãÍÏÏÉ¡ Şã ÈÅÑÌÇÚ ÕÍíÍ
		}

		// Date>=To && Date<=From
		if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			&&
			(clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			)
		{
			return true; // ÅĞÇ ßÇä ÇáÊÇÑíÎ Èíä ÇáÊæÇÑíÎ ÇáãÍÏÏÉ¡ Şã ÈÅÑÌÇÚ ÕÍíÍ
		}

		return false; // ÅĞÇ ßÇä ÇáÊÇÑíÎ ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ¡ Şã ÈÅÑÌÇÚ ÎØÃ
	}

	// ŞÑÇÁÉ ÑŞã ÕÍíÍ ãä ÇáãÓÊÎÏã ãÚ ÇáÊÍŞŞ ãä ÇáÕÍÉ
	static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		int Number;
		while (!(cin >> Number)) { // Şã ÈÊßÑÇÑ ÇáÚãáíÉ ÍÊì íÊã ÅÏÎÇá ÑŞã ÕÇáÍ
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number; // ÅÑÌÇÚ ÇáÑŞã ÇáÕÇáÍ ÈÚÏ ÇáÊÍŞŞ ãä ÕÍÊå
	}

	// ŞÑÇÁÉ ÑŞã ÕÍíÍ ãÍÕæÑ İí äØÇŞ ãÚíä ãÚ ÇáÊÍŞŞ ãä ÇáÕÍÉ
	static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		int Number = ReadIntNumber(); // ŞÑÇÁÉ ÇáÑŞã ÇáÕÇáÍ ãä ÇáãÓÊÎÏã

		while (!IsNumberBetween(Number, From, To)) // ÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ
		{
			cout << ErrorMessage; // ÅÙåÇÑ ÑÓÇáÉ ÇáÎØÃ
			Number = ReadIntNumber(); // ŞÑÇÁÉ ÇáÑŞã ÇáÕÇáÍ ãÑÉ ÃÎÑì
		}
		return Number; // ÅÑÌÇÚ ÇáÑŞã ÇáÕÇáÍ ÈÚÏ ÇáÊÍŞŞ ãä ÕÍÊå
	}

	// ŞÑÇÁÉ ÑŞã ÚÔÑí ãä ÇáãÓÊÎÏã ãÚ ÇáÊÍŞŞ ãä ÇáÕÍÉ
	static double ReadFloatNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		float Number;
		while (!(cin >> Number)) { // Şã ÈÊßÑÇÑ ÇáÚãáíÉ ÍÊì íÊã ÅÏÎÇá ÑŞã ÚÔÑí ÕÇáÍ
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number; // ÅÑÌÇÚ ÇáÑŞã ÇáÚÔÑí ÈÚÏ ÇáÊÍŞŞ ãä ÕÍÊå
	}

	// ŞÑÇÁÉ ÑŞã ÚÔÑí ãÍÕæÑ İí äØÇŞ ãÚíä ãÚ ÇáÊÍŞŞ ãä ÇáÕÍÉ

	static double ReadFloatNumberBetween(double From, double To, string ErrorMessage = "ÇáÑŞã ÛíÑ Öãä ÇáäØÇŞ ÇáãÍÏÏ¡ íÑÌì ÅÚÇÏÉ ÇáãÍÇæáÉ:\n")
	{
		float Number = ReadFloatNumber(); // ŞÑÇÁÉ ÇáÑŞã ÇáÚÔÑí ãä ÇáãÓÊÎÏã

		while (!IsNumberBetween(Number, From, To)) { // ÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ
			cout << ErrorMessage; // ÅÙåÇÑ ÑÓÇáÉ ÇáÎØÃ
			Number = ReadDblNumber(); // ŞÑÇÁÉ ÇáÑŞã ÇáÚÔÑí ãÑÉ ÃÎÑì
		}
		return Number; // ÅÑÌÇÚ ÇáÑŞã ÇáÚÔÑí ÈÚÏ ÇáÊÍŞŞ ãä ÕÍÊå
	}

	// ŞÑÇÁÉ ÑŞã ÚÔÑí ãä ÇáãÓÊÎÏã ãÚ ÇáÊÍŞŞ ãä ÇáÕÍÉ

	static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		double Number;
		while (!(cin >> Number)) { // Şã ÈÊßÑÇÑ ÇáÚãáíÉ ÍÊì íÊã ÅÏÎÇá ÑŞã ÚÔÑí ÕÇáÍ
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number; // ÅÑÌÇÚ ÇáÑŞã ÇáÚÔÑí ÈÚÏ ÇáÊÍŞŞ ãä ÕÍÊå
	}

	// ŞÑÇÁÉ ÑŞã ÚÔÑí ãÍÕæÑ İí äØÇŞ ãÚíä ãÚ ÇáÊÍŞŞ ãä ÇáÕÍÉ
	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "ÇáÑŞã ÛíÑ Öãä ÇáäØÇŞ ÇáãÍÏÏ¡ íÑÌì ÅÚÇÏÉ ÇáãÍÇæáÉ:\n")
	{
		double Number = ReadDblNumber(); // ŞÑÇÁÉ ÇáÑŞã ÇáÚÔÑí ãä ÇáãÓÊÎÏã

		while (!IsNumberBetween(Number, From, To)) { // ÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÎÇÑÌ ÇáäØÇŞ ÇáãÍÏÏ
			cout << ErrorMessage; // ÅÙåÇÑ ÑÓÇáÉ ÇáÎØÃ
			Number = ReadDblNumber(); // ŞÑÇÁÉ ÇáÑŞã ÇáÚÔÑí ãÑÉ ÃÎÑì
		}
		return Number; // ÅÑÌÇÚ ÇáÑŞã ÇáÚÔÑí ÈÚÏ ÇáÊÍŞŞ ãä ÕÍÊå
	}

	// ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÊÇÑíÎ ÕÍíÍğÇ
	static bool IsValideDate(clsDate Date)
	{
		return	clsDate::IsValidDate(Date); // Şã ÈÅÑÌÇÚ äÊíÌÉ ÇáÊÍŞŞ ãä ÕÍÉ ÇáÊÇÑíÎ
	}

	// ŞÑÇÁÉ ÓáÓáÉ äÕíÉ ãä ÇáãÓÊÎÏã
	static string ReadString()
	{
		string  S1 = "";
		// ÇÓÊÎÏã std::ws áÇÓÊÎÑÇÌ ßá ÇáİÑÇÛÇÊ ÇáÈíÖÇÁ
		getline(cin >> ws, S1);
		return S1; // ÅÑÌÇÚ ÇáÓáÓáÉ ÇáäÕíÉ ÇáãŞÑæÁÉ
	}
};