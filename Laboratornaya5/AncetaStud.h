#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <clocale>
#include <string.h>
#include <locale.h>
#include <string>
using std::string;
//��������� ������ ���������� ��������� ������� ��������������
const int N = 30;
class otlichnik    //��������� ������ ������ ��� �������� ���������
{
public:
    char dopstependia[N];
    int razmer;

};
class horoshist    //��������� ������ ������ ��� �������� ��������� 
{
public:
    char stependia[N];
    int razmer;

};
class troechnik    //��������� ������ ������ ��� �������� ��������� 
{
public:
    char stependia[N];

};
class dvoechnik    //��������� ������ ������ ��� �������� ���������
{
public:
    char adres[N];
    char telephone[N];

};
enum typchik
{
    OTL,
    HOR,
    TRO,
    DVO
};
class AncetaStud
{
private:
    string fio;  //���������� ������ ��� �������
    int nomerGrup; //���������� ������ ����� ������ �������
    int nomerStud; //���������� ������ ����� ������������� �������
    int reiting;   //���������� ������ ������� �������
    typchik type;      //���������� ������ ����� ��������� ����������
    union          //����������� ������ ���������� ��������� ������� ����������� � ����������� �� �������� ��������
    {
        otlichnik otl;
        horoshist hor;
        troechnik tro;
        dvoechnik dvo;
    }uch;
    static int kolstud[3]; //����������� ���� ������ ���������� ���������
public:
    static int k;
    AncetaStud(); //����������� ��� ����������
    AncetaStud(typchik type); //����������� � ����� ����������
    AncetaStud(string fio, int nomerGrup, int nomerStud, int reiting, typchik type); //����������� �� ����� �����������
    ~AncetaStud(); //���������� ��� ���������� �������� ������������ ���� kolstud

    void setfio(string fio); //��������� �������� ���������� fio
    void setnomerGrup(int nomerGrup); //��������� �������� ���������� nomerGrup
    void setnomerStud(int nomerStud); //��������� �������� ���������� nomerStud
    void setreiting(int reiting); //��������� �������� ���������� reiting
    void settype(typchik type); //��������� �������� ���������� type
    void inputuch(); //���� �������� ���������� uch */
    void setuch1(int razmer, char dopstependia[N]); //��������� �������� ���������� uch
    void setuch2(int razmer, char stependia[N]); //��������� �������� ���������� uch
    void setuch3(char stependia[N]); //��������� �������� ���������� uch
    void setuch4(char adres[N], char telephone[N]); //��������� �������� ���������� uch
    static void setkolstud(int kolstud); //��������� �������� ���������� kolstud
    //void initkolstud();

    //char* getfio(); //��������� �������� ���������� fio
    string getfio(); //��������� �������� ���������� fio
    int getnomerGrup(); //��������� �������� ���������� nomerGrup
    int getnomerStud(); //��������� �������� ���������� nomerStud
    int getreiting(); //��������� �������� ���������� reiting
    typchik gettype(); //��������� �������� ���������� type
    int getuch1(char dopstependia[N]); //��������� �������� ���������� uch */
    int getuch2(char stependia[N]); //��������� �������� ���������� uch */
    void getuch3(char stependia[N]); //��������� �������� ���������� uch */
    void getuch4(char adres[N], char telephone[N]); //��������� �������� ���������� uch */
    static int getkolstud(); //��������� �������� ���������� kolstud
    static string yznatinstitut(int k); //��������� �������� ��������� �� ����

    void inputstud();  //���� - ���� ������ � ���������
    void outputstud(); //���� - ����� ������ � ���������
    void deletestud(AncetaStud* spisokstud[N]); //���� - �������� ������ � ��������

    //���� ������������� �������
    friend int searchbynamestud(AncetaStud* spisokstud[N], string �);
    friend int searchbyreiting(AncetaStud* spisokstud[N], int d);
};


extern AncetaStud* spisokstud[3][N]; //������ ���������� �� �������� ������ ��� ��������� �������� ����� ����� ���������� ��������� EXTERN
//extern int k; //���������� ���������� �� ����� ���������
//extern int kolstud;

 
