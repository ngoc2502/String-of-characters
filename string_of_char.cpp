#include"string_char.h"


using namespace std;
int len(char* s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
int compare_string(char* c1, char* c2)
{
	int len1 = len(c1);
	int len2 = len(c2);
	int n = 0;
	if (len1 > len2) n = len2; else n = len1;
	for (int i = 0; i < n; i++)
	{
		if (c1[i] < c2[i]) return (-1);
		else if (c1[i] > c2[i])return (1);
	}
	if (len1 > len2) return(1);
	else if (len1 < len2) return(-1);
	return(0);

}
char *copy_string(char* result_s, char* original_s, int start, int nums)//coppy nums element at start from original_s to result_s
{
	int k = 0;
	for (int j= start; j < start+nums; j++)
		{
			result_s[k] = original_s[j];
			k++;
		}
	result_s[k] = '\0';
	return (result_s);
}

/*void insert_string(char* s1, char* &s2, int startpos)//insert s1 into s2 at startpos
{
	int len1 = len(s1);
	int len2 = len(s2);
	
	if (startpos > len2) startpos = len2;
	if (startpos < len2)
	{
		char* temp;
		temp = new char[len2 - startpos + 1];
		strcpy(temp,s2+startpos);
		strcpy(s2 + startpos, s1);
		strcpy(s2 + startpos + len1, temp);
		delete[]temp;
		temp = nullptr;
	}
	else
	{
		strcpy(s2 + startpos, s1);
	}
	
}*/
char* string_Ncopy(char* s1, char* s2, int nums)//coppy nums element from s2 to s1
{
	for (int i = 0; i < nums; i++)
	{
		s1[i] = s2[i];
	}
	s1[nums] = '\0';
	return(s1);
}
char* string_copy(char* s1, char* s2)//copy all element from s2 to s1
{
	for (int i = 0; i < len(s2); i++)
	{
		s1[i] = s2[i];
	}
	s1[len(s2)] = '\0';
	return (s1);
}
void delete_string(char* s, int startpos, int nums)// delete nums element start at startpos from s
{
	int k = len(s);
	for (int i = startpos; i < k- nums; i++)
	{
		s[i] = s[i + nums];
	}
	k = k - nums;
	s[k] = '\0';
}
int findsubstring(char* s1, char* s2, int startpos)//find the fist appear position of s2 in s1, start at startpos,the function return -1 if dont find the ligal value  
{
	int i = 0;
	for ( i = startpos; i < len(s1) - len(s2)+1;i++) 
	{
		if (s1[i] == s2[0])
		{
			char* s = new char[max1];
			s = copy_string(s, s1, i, len(s2));
			s[len(s2)] = '\0';
			if (compare_string(s,s2) == 0) return(i); else return(-1);
			delete[]s;
			s = nullptr;
		}
	}
	
}

int issubstring(char* s1, char* s2)//check if s2 appear in s1, return 1 if yes, -1 if no
{
	char* s=new char [max2];
	if (len(s2) > len(s1)) return(-1);
	else {
		for (int i = 0; i < len(s1) - len(s2) + 1; i++)
		{
			if (s1[i] == s2[0])
			{
				s = copy_string(s, s1, i, len(s2));
				s[len(s2)] = '\0';
				if (compare_string(s, s2) == 0) return(1); else return(-1);
			}
		}
	}
	delete[]s;
	s = nullptr;
}
int count(char* s1, char* s2, int &count)// count the number of time s2 appear in s1
{
	 count = 0;
	for (int i = 0; i < len(s1) - len(s2) + 1; i++)
	{
		if (findsubstring(s1, s2, i) != -1) count++;
	}
	return(count);
}
