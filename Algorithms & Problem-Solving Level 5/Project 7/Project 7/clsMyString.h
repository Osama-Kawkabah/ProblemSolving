#pragma once  // ÊÃ‗Ï דה ÊÖדםה ÇבדבÝ דÑÉ זÇÍÏÉ ÝÞØ

#include <stack>  // ÊÖדםה ד‗ÊÈÉ stack בÇÓÊÎÏÇד ÇבÍÇזםÇÊ

using namespace std;  // ÇÓÊÎÏÇד ÝÖÇÁ ÇבÇÓדÇÁ std בÊÌהÈ ‗ÊÇÈÉ std:: ÞÈב ÃÓדÇÁ ÇבÃהזÇÚ

class clsMyString  // ÊÚÑםÝ ÝÆÉ clsMyString
{

private:

	stack <string> _Undo;  // ד‗ÏÓ בÍÝÙ ÇבÞםד ÇבÓÇÈÞÉ בÊהÝםÐ ÚדבםÉ ÇבÊÑÇÌÚ (Undo)
	stack <string> _Redo;  // ד‗ÏÓ בÍÝÙ ÇבÞםד בבÊד‗םה דה ÅÚÇÏÉ ÊהÝםÐ ÚדבםÉ ÇבÊÑÇÌÚ (Redo)
	string _Value;  // ÇבÞםדÉ ÇבÍÇבםÉ בבÓבÓבÉ ÇבהÕםÉ

public:

	void Set(string value)  // ÏÇבÉ בÊÚםםה ÞםדÉ ÌÏםÏÉ בבÓבÓבÉ ÇבהÕםÉ
	{
		_Undo.push(_Value);  // ÅÖÇÝÉ ÇבÞםדÉ ÇבÍÇבםÉ בבד‗ÏÓ _Undo ÞÈב ÊÍÏםËוÇ
		_Value = value;  // ÊÚםםה ÇבÞםדÉ ÇבÌÏםÏÉ
	}

	string Get()  // ÏÇבÉ בבÍÕזב Úבל ÇבÞםדÉ ÇבÍÇבםÉ בבÓבÓבÉ ÇבהÕםÉ
	{
		return _Value;  // ÅÑÌÇÚ ÇבÞםדÉ ÇבÍÇבםÉ
	}

	__declspec(property(get = Get, put = Set)) string Value;  // ÇÓÊÎÏÇד ÎÇÕםÉ property בÊÈÓםØ ÇבזÕזב Åבל ÇבÞםדÉ

	void Undo()  // ÏÇבÉ בÊהÝםÐ ÚדבםÉ ÇבÊÑÇÌÚ
	{
		if (!_Undo.empty())  // ÇבÊÍÞÞ דה Ãה ד‗ÏÓ _Undo בםÓ ÝÇÑÛנÇ
		{
			_Redo.push(_Value);  // ÅÖÇÝÉ ÇבÞםדÉ ÇבÍÇבםÉ בד‗ÏÓ _Redo
			_Value = _Undo.top();  // ÊÚםםה ÇבÞםדÉ ÇבÌÏםÏÉ דה ÃÚבל ד‗ÏÓ _Undo
			_Undo.pop();  // ÅÒÇבÉ ÇבÞםדÉ דה ד‗ÏÓ _Undo
		}
	}

	void Redo()  // ÏÇבÉ בÊהÝםÐ ÚדבםÉ ÅÚÇÏÉ ÇבÊÑÇÌÚ
	{
		if (!_Redo.empty())  // ÇבÊÍÞÞ דה Ãה ד‗ÏÓ _Redo בםÓ ÝÇÑÛנÇ
		{
			_Undo.push(_Value);  // ÅÖÇÝÉ ÇבÞםדÉ ÇבÍÇבםÉ בד‗ÏÓ _Undo
			_Value = _Redo.top();  // ÊÚםםה ÇבÞםדÉ ÇבÌÏםÏÉ דה ÃÚבל ד‗ÏÓ _Redo
			_Redo.pop();  // ÅÒÇבÉ ÇבÞםדÉ דה ד‗ÏÓ _Redo
		}
	}
};
