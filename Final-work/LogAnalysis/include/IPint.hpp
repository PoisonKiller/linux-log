#include <iostream>
#include <cstring>
#include "IPLocator.hpp"
using namespace std;

#define ll long long

ll transIP(char ip[]); //���ַ���ipת��Ϊ������

int IPhash(char ip[], int st[]);      //����hash������IP��ɢ��[1~10000]��

void TransToIP(int a);  //��������ת��ΪIP