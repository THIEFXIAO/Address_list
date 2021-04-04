#include"main.h"

void Rewrite_Contact(Contacts* arr, int position)
{
	int in = 7;
	while (1)
	{
		cout << "请选择要修改的联系人内容:" << endl;
		cout << "1、修改姓名" << endl;
		cout << "2、修改性别" << endl;
		cout << "3、修改年龄" << endl;
		cout << "4、修改电话" << endl;
		cout << "5、修改地址" << endl;
		cout << "0、修改完成" << endl;
		cin >> in;
		switch (in)
		{
		case 0:
			return;
		case 1:
			cout << "请输入新的的联系人姓名:" << endl;
			cin >> arr[position].name;
			break;
		case 2:
			cout << "请输入新的联系人性别:" << endl;
			cin >> arr[position].sex;
			break;
		case 3:
			cout << "请输入新的联系人年龄:" << endl;
			cin >> arr[position].age;
			break;
		case 4:
			cout << "请输入新的联系人电话:" << endl;
			cin >> arr[position].phone_number;
			break;
		case 5:
			cout << "请输入新的联系人地址:" << endl;
			cin >> arr[position].home_address;
			break;
		default:
			cout << "您的输入有误，请输入数组0-5" << endl;
			break;
		}
	}	
}
