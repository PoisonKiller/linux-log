#ifndef _GET_LOGS_
#define _GET_LOGS__

#include <iostream>
#include <cstring>
using namespace std;

//��ȡip
void get_ip(int *i, char buf[],char logs_ip[]);
//��ȡʱ��
void get_time(int *i, char buf[], char logs_time[]);
//��ȡ��������
void get_req(int *i, char buf[], char logs_time[]);
//��ȡ��վ·��
void get_path(int *i, char buf[], char logs_time[]);
//��ȡ�������������
void get_web_ser(int *i, char buf[], char logs_time[]);

#endif