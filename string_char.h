#include<string>
#include<stdlib.h>
#include<iostream>


constexpr auto max1 = 100;
constexpr auto max2 = 100;

int compare_string(char* c1, char* c2);
// length string
int len(char* s);
// return a string coppied from original_s
char* copy_string(char * result_s, char* original_s, int start, int nums);
//coppy nums element from s2 to s1
char* string_Ncopy(char* s1, char* s2, int nums);
//copy all element from s2 to s1
char* string_copy(char* s1, char* s2);
// delete nums element start at startpos from s
void delete_string(char* s, int startpos, int nums);
//find the fist appear position of s2 in s1, start at startpos,the function return -1 if dont find the ligal value  
int findsubstring(char* s1, char* s2, int startpos);
//check if s2 appear in s1, return 1 if yes, -1 if no
int issubstring(char* s1, char* s2);
// count the number of time s2 appear in s1
int count(char* s1, char* s2,int &count);
//void insert_string(char* s1, char* &s2, int startpos);//insert s1 into s2 at startpos




