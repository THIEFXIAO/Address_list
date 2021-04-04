#include "main.h"

void Write_Contact(Contacts* arr, int* length)
{
	if ((*length) >= MAX)
	{
		cout << "通讯录已满，请删除后再添加！" << endl;
	}
	else
	{
		cout << "请输入要添加的联系人姓名:" << endl;
		cin >> arr[*length].name;
		cout << "请输入要添加的联系人性别:" << endl;
		cin >> arr[*length].sex;
		cout << "请输入要添加的联系人年龄:" << endl;
		/* 到时候想办法修修这个炸掉的地方，cin输入溢出关闭状态
		int age;
		while (1)
		{
			cin >> age;
			if (cin.fail())
			{
				cout << "请输入一个整数" << endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max());
			}
			else
			{
				arr[length].age = age;
				break;
			}
		}		
		*/
		cin >> arr[*length].age;
		cout << "请输入要添加的联系人电话:" << endl;
		cin >> arr[*length].phone_number;
		cout << "请输入要添加的联系人地址:" << endl;
		cin >> arr[*length].home_address;	
		(*length)++;
	}	
}