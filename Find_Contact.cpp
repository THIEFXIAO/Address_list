#include"main.h"

int Find_Contact(Contacts* arr, int length)
{
	string name;
	if (length == 0)
	{
		cout << "您的通讯录还是空的呢" << endl;
	}
	else
	{
		cout << "请输入联系人姓名:" << endl;
		cin >> name;
		for (int i = 0; i < length; i++)
		{
			if (arr[i].name == name)
			{
				return i;
			}
		}	
		cout << "您的通讯录中查无此人" << endl;
	}
	return -1;
}