#include"string_char.h"

using namespace std;

int main()
{
	char* s1 = new char[max1];
	char* s2 = new char[max2];
	char* s3 = new char[max2];
	char* s4 = new char[max2];
	int n = 0;
	cout << "Enter the function wanting to check\n"
		<< "1. compare 2 strings\n"
		<< "2. Copy substring from s1(enter the startpos)\n"
		<< "3. Copy substring from s1 to s4(needn't enter the startpos). To take the place of strncpy function\n"
		<< "4. Copy all elements from s1 to s4. To take place of strcpy function\n"
		<< "5. Delete nums char at startpos position from s1\n"
		<< "6. Find the position of substring in another string\n"
		<< "7. check if substring exist on the another string\n"
		<< "8. Count the number of time the substring appear in string1\n";
	cin >> n;
	switch (n)
	{
	case 1:
	{
		cout << "1. compare 2 strings\n";
		cin.ignore();
		cout << "s1: ";
		cin.getline(s1, max1);
		cout << "s2: ";
		cin.getline(s2, max2);
		cout << "len 1: " << len(s1) << "\n";
		cout << "len 2: " << len(s2) << "\n";
		int ss = compare_string(s1, s2);
		if (ss == 1) cout << "s1>s2\n";
		else if (ss == -1) cout << "s1<s2\n";
		else cout << "s1=s2\n";
		break;
	}
	case 2:
	{
		int start1 = 0;
		int num1 = 0;
		cin.ignore();
		cout << "s1: ";
		cin.getline(s1, max1);
		cout << "start :";
		cin >> start1;
		cout << "the number of element :";
		cin >> num1;
		if (start1 >= 0 && start1 <= len(s1) && num1 >= 0 && num1 <= len(s1) - start1)
		{
			cout << copy_string(s3, s1, start1, num1) << "\n";
		}
		else cout << "Start position or the numbers of char needed coppy is illegal!\n";
		break;
	}
	case 3:
	{
		cin.ignore();
		cout << "s1: ";
		cin.getline(s1, max1);
		int num2 = 0;
		cout << "the number of element :";
		cin >> num2;
		if (num2 <= len(s1))
		{
			cout << "s4:" << string_Ncopy(s4, s1, num2) << "\n";
		}
		else cout << "the number of char needed copy is illegal\n";
		break;
	}
	case 4:
	{
		cin.ignore();
		cout << "s1: ";
		cin.getline(s1, max1);
		cout << "s4: " << string_copy(s4, s1) << "\n";
		break;
	}
	case 5:
	{
		cin.ignore();
		cout << "s1:";
		cin.getline(s1, max1);
		int nums = 0;
		cout << "nums:";
		cin >> nums;
		int startpos = 0;
		cout << "startpos:";
		cin >> startpos;
		delete_string(s1, startpos, nums);
		cout << s1 << "\n";
		break;
	}
	case 6:
	{
		int startpos = 0;
		cout << "6. Find the position of substring in another string\n";
		cout << "string1:";
		cin.ignore();
		cin.getline(s1, max2);
		cout << "substring:";
		cin.getline(s2, max1);
		cout << "startpos:";
		cin >> startpos;
		if (startpos <= len(s1) && len(s2) <= len(s1))
		{
			if (findsubstring(s1, s2, startpos) == -1) cout << "substring not exits in string1\n";
			else cout << findsubstring(s1, s2, startpos) << "\n";
		}
		else cout << "startpos or substring is illigal!!\n";
		break;
	}
	case 7:
	{
		cin.ignore();
		cout << "string1:";
		cin.getline(s1, max1);
		cout << "substring:";
		cin.getline(s2, max2);
		if (issubstring(s1, s2) == 1) cout << "yes\n";
		else cout << "no\n";
		break;
	}
	case 8:
	{
		cout << "8. Count the number of time the substring appear in string1\n";
		int re = 0;
		cout << "string1:";
		cin.ignore();
		cin.getline(s1, max1);
		cout << "substring:";
		cin.getline(s2, max2);
		cout << count(s1, s2, re);
		break;
	}
	}
	delete[]s4;
	s4 = nullptr;
	delete[]s3;
	s3 = nullptr;
	delete[] s1;
	s1 = nullptr;
	delete []s2;
	s2 = nullptr;
	return(0);
}