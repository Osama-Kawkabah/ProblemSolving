#pragma once  // ���� �� ����� ����� ��� ����� ���

#include <stack>  // ����� ����� stack �������� ��������

using namespace std;  // ������� ���� ������� std ����� ����� std:: ��� ����� �������

class clsMyString  // ����� ��� clsMyString
{

private:

	stack <string> _Undo;  // ���� ���� ����� ������� ������ ����� ������� (Undo)
	stack <string> _Redo;  // ���� ���� ����� ������� �� ����� ����� ����� ������� (Redo)
	string _Value;  // ������ ������� ������� ������

public:

	void Set(string value)  // ���� ������ ���� ����� ������� ������
	{
		_Undo.push(_Value);  // ����� ������ ������� ������ _Undo ��� �������
		_Value = value;  // ����� ������ �������
	}

	string Get()  // ���� ������ ��� ������ ������� ������� ������
	{
		return _Value;  // ����� ������ �������
	}

	__declspec(property(get = Get, put = Set)) string Value;  // ������� ����� property ������ ������ ��� ������

	void Undo()  // ���� ������ ����� �������
	{
		if (!_Undo.empty())  // ������ �� �� ���� _Undo ��� ������
		{
			_Redo.push(_Value);  // ����� ������ ������� ����� _Redo
			_Value = _Undo.top();  // ����� ������ ������� �� ���� ���� _Undo
			_Undo.pop();  // ����� ������ �� ���� _Undo
		}
	}

	void Redo()  // ���� ������ ����� ����� �������
	{
		if (!_Redo.empty())  // ������ �� �� ���� _Redo ��� ������
		{
			_Undo.push(_Value);  // ����� ������ ������� ����� _Undo
			_Value = _Redo.top();  // ����� ������ ������� �� ���� ���� _Redo
			_Redo.pop();  // ����� ������ �� ���� _Redo
		}
	}
};
