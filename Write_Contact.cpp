#include "main.h"

void Write_Contact(Contacts* arr, int* length)
{
	if ((*length) >= MAX)
	{
		cout << "ͨѶ¼��������ɾ��������ӣ�" << endl;
	}
	else
	{
		cout << "������Ҫ��ӵ���ϵ������:" << endl;
		cin >> arr[*length].name;
		cout << "������Ҫ��ӵ���ϵ���Ա�:" << endl;
		cin >> arr[*length].sex;
		cout << "������Ҫ��ӵ���ϵ������:" << endl;
		/* ��ʱ����취�������ը���ĵط���cin��������ر�״̬
		int age;
		while (1)
		{
			cin >> age;
			if (cin.fail())
			{
				cout << "������һ������" << endl;
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
		cout << "������Ҫ��ӵ���ϵ�˵绰:" << endl;
		cin >> arr[*length].phone_number;
		cout << "������Ҫ��ӵ���ϵ�˵�ַ:" << endl;
		cin >> arr[*length].home_address;	
		(*length)++;
	}	
}