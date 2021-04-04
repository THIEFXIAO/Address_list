#include "main.h"

void Show_Contact(Contacts* arr, int length)
{
	if (length == 0)
	{
		cout << "您的通讯录还是空的呢" << endl;
	}
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << "、   " << arr[i].name << "  " << arr[i].sex << "  " << arr[i].age << "  " << arr[i].phone_number << "  " << arr[i].home_address << endl << endl;
	}
}