#include"main.h"

void Rewrite_Contact(Contacts* arr, int position)
{
	int in = 7;
	while (1)
	{
		cout << "��ѡ��Ҫ�޸ĵ���ϵ������:" << endl;
		cout << "1���޸�����" << endl;
		cout << "2���޸��Ա�" << endl;
		cout << "3���޸�����" << endl;
		cout << "4���޸ĵ绰" << endl;
		cout << "5���޸ĵ�ַ" << endl;
		cout << "0���޸����" << endl;
		cin >> in;
		switch (in)
		{
		case 0:
			return;
		case 1:
			cout << "�������µĵ���ϵ������:" << endl;
			cin >> arr[position].name;
			break;
		case 2:
			cout << "�������µ���ϵ���Ա�:" << endl;
			cin >> arr[position].sex;
			break;
		case 3:
			cout << "�������µ���ϵ������:" << endl;
			cin >> arr[position].age;
			break;
		case 4:
			cout << "�������µ���ϵ�˵绰:" << endl;
			cin >> arr[position].phone_number;
			break;
		case 5:
			cout << "�������µ���ϵ�˵�ַ:" << endl;
			cin >> arr[position].home_address;
			break;
		default:
			cout << "����������������������0-5" << endl;
			break;
		}
	}	
}
