#include"main.h"

int Find_Contact(Contacts* arr, int length)
{
	string name;
	if (length == 0)
	{
		cout << "����ͨѶ¼���ǿյ���" << endl;
	}
	else
	{
		cout << "��������ϵ������:" << endl;
		cin >> name;
		for (int i = 0; i < length; i++)
		{
			if (arr[i].name == name)
			{
				return i;
			}
		}	
		cout << "����ͨѶ¼�в��޴���" << endl;
	}
	return -1;
}