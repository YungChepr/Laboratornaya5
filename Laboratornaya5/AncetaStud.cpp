#define _CRT_SECURE_NO_WARNINGS
#include "AncetaStud.h"


AncetaStud::AncetaStud() //����������� ��� ����������
{
    fio = "";
    nomerGrup = 0;
    nomerStud = 0;
    reiting = 0;
    type = typchik::DVO;
    uch.dvo = *(new dvoechnik);
    strcpy(uch.dvo.adres, "");
    strcpy(uch.dvo.telephone, "");
    //setkolstud(getkolstud() + 1);

    //this->nomerGrup=0;
};

AncetaStud::AncetaStud(typchik t) //����������� � ����� ����������
{
    fio = "";
    nomerGrup = 0;
    nomerStud = 0;
    reiting = 0;
    type = t;
    uch.dvo = *(new dvoechnik);
    strcpy(uch.dvo.adres, "");
    strcpy(uch.dvo.telephone, "");
    //kolstud = kolstud + 1;

};

AncetaStud::AncetaStud(string f, int nomerG, int nomerS, int r, typchik t) //����������� �� ����� �����������
{
    fio = f;
    nomerGrup = nomerG;
    nomerStud = nomerS;
    reiting = r;
    type = t;
    uch.dvo = *(new dvoechnik);
    strcpy(uch.dvo.adres, "");
    strcpy(uch.dvo.telephone, "");
    //kolstud = kolstud + 1;

};

AncetaStud::~AncetaStud() //���������� 
{
    /*if (type == OTL) //�������� ����� ��� ������� ��� ������ � �������� ������� �������
      {
          delete &AncetaStud::uch.otl;
      }
      if (type == HOR)
      {
          delete &AncetaStud::uch.hor;
      }
      if (type == TRO)
      {
          delete &AncetaStud::uch.tro;
      }
      if (type == DVO)
      {
          delete &AncetaStud::uch.dvo;
      }*/
}

void AncetaStud::setfio(string fio) //��������� �������� ���������� fio
{
    //strcpy(this->fio, fio);
    this->fio = fio;
};

/*char* AncetaStud::getfio() //��������� �������� ���������� fio 1
{
    return fio;
}; */

string AncetaStud::getfio() //��������� �������� ���������� fio 2
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    //strcpy(fio, this->fio);
    return this->fio;
    //��������� ��� ��������
    //char fio[30] ������ ��������� ����������
};

void AncetaStud::setnomerGrup(int nomerGrup) //��������� �������� ���������� nomerGrup
{
    this->nomerGrup = nomerGrup;
};

int AncetaStud::getnomerGrup() //��������� �������� ���������� nomerGrup
{
    return nomerGrup;
};

void AncetaStud::setnomerStud(int nomerStud) //��������� �������� ���������� nomerStud
{
    this->nomerStud = nomerStud;
};

int AncetaStud::getnomerStud() //��������� �������� ���������� nomerGrup
{
    return nomerStud;
};

void AncetaStud::setreiting(int reiting) //��������� �������� ���������� reiting
{
    this->reiting = reiting;
};

int AncetaStud::getreiting() //��������� �������� ���������� nomerGrup
{
    return reiting;
};

void AncetaStud::settype(typchik type) //��������� �������� ���������� type
{
    this->type = type;
};

typchik AncetaStud::gettype() //��������� �������� ���������� nomerGrup
{
    return type;
};

void AncetaStud::inputuch() //��������� �������� ���������� uch
{
    /* if (type == OTL) //�������� ����� ��� ������� ��� ������ � �������� ������� �������
     {
         delete &(uch.otl);
     }
     if (type == HOR)
     {
         delete &(uch.hor);
     }
     if (type == TRO)
     {
         delete &(uch.tro);
     }
     if (type == DVO)
     {
         delete &(uch.dvo);
     } */

    if (reiting >= 75) //�������� ������ �������
    {
        type = typchik::OTL;
        //uch.otl = *(new otlichnik);

        strcpy(this->uch.otl.dopstependia, "������� �������� ��������� ");
        printf("������� ������ �������������� ���������\n");
        scanf("%d", &this->uch.otl.razmer);
    }
    else
    {
        if (reiting >= 50)
        {
            type = typchik::HOR;
            //uch.hor = *(new horoshist);

            strcpy(this->uch.hor.stependia, "�������  �������� ��������� ");
            printf("������� ������ ������� ���������\n");
            scanf("%d", &this->uch.hor.razmer);
        }
        else
        {
            if (reiting >= 25)
            {
                type = typchik::TRO;
                //uch.tro = *(new troechnik);

                strcpy(this->uch.tro.stependia, "������� �� �������� ���������");
            }
            else
            {
                type = typchik::DVO;
                //uch.dvo = *(new dvoechnik);

                while (getchar() != '\n');
                printf("������� �������� ����� ��������\n");
                gets_s(this->uch.dvo.adres);
                printf("������� Enter\n");
                while (getchar() != '\n');
                printf("������� ������� ��������\n");
                gets_s(this->uch.dvo.telephone);
                printf("������� Enter\n");
            };
        };
    }
};
void AncetaStud::setuch1(int razmer, char dopstependia[N]) //��������� �������� ���������� uch1
{
    strcpy(this->uch.otl.dopstependia, dopstependia);
    this->uch.otl.razmer = razmer;
};

int AncetaStud::getuch1(char dopstependia[N]) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(dopstependia, this->uch.otl.dopstependia);
    return uch.otl.razmer;
};

void AncetaStud::setuch2(int razmer, char stependia[N]) //��������� �������� ���������� uch2
{
    strcpy(this->uch.hor.stependia, stependia);
    this->uch.hor.razmer = razmer;
};

int AncetaStud::getuch2(char stependia[N]) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(stependia, this->uch.hor.stependia);
    return uch.hor.razmer;
};

void AncetaStud::setuch3(char stependia[N]) //��������� �������� ���������� uch3
{
    strcpy(this->uch.tro.stependia, stependia);
};

void AncetaStud::getuch3(char stependia[N]) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(stependia, this->uch.tro.stependia);

};

void AncetaStud::setuch4(char adres[N], char telephone[N]) //��������� �������� ���������� uch4
{
    strcpy(this->uch.dvo.adres, adres);
    strcpy(this->uch.dvo.telephone, telephone);
};

void AncetaStud::getuch4(char adres[N], char telephone[N]) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(adres, this->uch.dvo.adres);
    strcpy(telephone, this->uch.dvo.telephone);
};

void AncetaStud::setkolstud(int kolst) //��������� �������� ���������� kolstud
{
    kolstud[k] = kolst;
};

int AncetaStud::getkolstud() //��������� �������� ���������� kolstud
{
    return kolstud[k];
};

int AncetaStud::kolstud[3] = { 0,0,0 };

int AncetaStud::k = 0; //����� ��� ����������� ���������� ���������� ������ ����� �������� �� � CPP �����

/*void AncetaStud::initkolstud()
{
    for (k = 0; k++; k < 3) 
    {
        setkolstud(0);
    }
    k = 0;
}; */

string AncetaStud::yznatinstitut(int k) //������� ���������� ������ ������� ���������� ��������� ��������
{
    string institut;
    switch (k) 
    {
    case 0: 
        institut = "�����";
        break;
    case 1:
        institut = "������";
        break;
    case 2:
        institut = "���������";
        break;
    default:
        institut = "�������� �� ����������!!!";
    }
    return institut;
};

void AncetaStud::inputstud() //���� - ���� ������ � ���������
{   //gets_s(a//��� this ��� �����������//->fio);
    printf(" ���: ");
    char fio[N];
    try { //���� ��������� ���� ������� ���
        //std::cin >> fio;
        gets_s(fio);

        if (strcmp(fio,"") == 0)
        {
            throw "������, ��� �� ����� ���� ������!";
        } 
         //gets_s(fio);
         setfio(string(fio));
    } catch (const char* oshibka)
    {
        printf(" %s \n", oshibka);
        return;
    } 


    int nomerGrup;
    do {
        printf(" ����� ������:(������� � ������� 5 ���� '22091')\n");
        while (scanf("%d", &nomerGrup) != 1) //�������� ����� ���� ������������ ������ �� �����
        {
            while (getchar() != '\n');
            printf("������. ������� ����� �� ��� �������� � ������� : ");
        }
    } while (nomerGrup < 10000 || nomerGrup >99999);
    setnomerGrup(nomerGrup);

    int nomerStud;

    try { //���� ��������� ���� ������������� ������ ��������������
        do {
            printf(" ����� �������������(������� � ������� 7 ���� '2111851')\n");
            while (scanf("%d", &nomerStud) != 1) //�������� ����� ���� ������������ ������ �� �����
            {
                while (getchar() != '\n');
                printf("������. ������� ����� ��� �������� � �������: ");
            }
        } while (nomerStud < 1000000 || nomerStud >9999999);

        int i;
        for (i = 0; i < AncetaStud::getkolstud(); i++)
        {
                if (spisokstud[k][i]->getnomerStud() == nomerStud)
                {
                    throw "������, ����� ����� ������������ ��� ����������!";
                }
        }

        setnomerStud(nomerStud);
    }
    catch (const char* oshibka)
    {
        printf(" %s \n", oshibka);
        return;
    }



    int reiting;
    do {
        printf(" ������� ��������:(�� 0 �� 100) ");
        while (scanf("%d", &reiting) != 1) //�������� ����� ���� ������������  ������ �� �����
        {
            while (getchar() != '\n');
            printf("������. ������� ����� ��� �������� � �������: ");
        }
    } while ((reiting < 0) || (reiting > 100));
    setreiting(reiting);

    inputuch();
    setkolstud(getkolstud() + 1); //����������� ������� ��������� �� 1
    printf("\n");
    while (getchar() != '\n');
}

void AncetaStud::outputstud() //���� - ����� ������ � ���������
{
    string fio;
    fio = getfio();
    std::cout << fio;
    //printf(" %s ", fio);

    int nomerGrup;
    nomerGrup = getnomerGrup();
    printf(" %d ", nomerGrup);

    int nomerStud;
    nomerStud = getnomerStud();
    printf(" %d ", nomerStud);

    int reiting;
    reiting = getreiting();
    printf(" %d ", reiting);

    typchik type;
    type = gettype();
    if (type == OTL)
    {
        char dopstependia[N];
        int razmer1;

        razmer1 = getuch1(dopstependia);
        printf(" %s ", dopstependia);
        printf(" %d ", razmer1);
    }
    if (type == HOR)
    {
        char stependia1[N];
        int razmer2;

        razmer2 = getuch2(stependia1);
        printf(" %s ", stependia1);
        printf(" %d ", razmer2);
    }
    if (type == TRO)
    {
        char stependia2[N];

        getuch3(stependia2);
        printf(" %s ", stependia2);

    }
    if (type == DVO)
    {
        char adres[N];
        char telephone[N];

        getuch4(adres, telephone);
        printf(" %s ", adres);
        printf(" %s ", telephone);

    }
    printf("\n");
}

void AncetaStud::deletestud(AncetaStud* spisokstud[N])//���� - �������� ������ � ��������
{
    int f1 = 0;
    int i;

    string fio;
    int nomerGrup;
    int nomerStud;
    int reiting;
    typchik type;

    int nomer = -1,
        nomerstudaka;
    string imya;

    char dopstependia[N];
    int razmer;
    char stependia[N];
    char adres[N];
    char telephone[N];
    while (getchar() != '\n');
    printf("������� ��� �������� �������� ������ �������\n");
    std::cin >> imya;
    //gets_s(imya);

    for (i = 0; i < AncetaStud::getkolstud(); i++)  //���� �������� ��������
    {
        if (spisokstud[i] != NULL) //����� ����� ����������
        {
            fio = (*spisokstud[i]).getfio();
            if (imya == fio)
            {

                nomerStud = (*spisokstud[i]).getnomerStud();
                std::cout << fio;
                //printf(" %s ", fio);
                printf(" %d ", nomerStud);
                f1 = f1 + 1;
                nomer = i;
                printf("\n");
            }
        }
    }

    if (f1 == 0)
    {
        printf("\n �� ������ ������� ������ �� �������\n ");
        nomer = -1;
    }

    if (f1 > 1)
    {
        f1 = 0;
        printf("�� ������ ������� ������� ������ ������ ��������\n");
        printf("������� ����� ������������� �������� �������� ������ �������\n");
        do {
            printf(" ����� �������������(������� � ������� 7 ���� '2111851')\n");
            while (scanf("%d", &nomerstudaka) != 1) //�������� ����� ���� ������������ ������ �� �����
            {
                while (getchar() != '\n');
                printf("������. ������� ����� ��� �������� � �������: ");
            }
        } while (nomerstudaka < 1000000 || nomerstudaka >9999999);
        for (i = 0; i < AncetaStud::getkolstud(); i++)  //���� �������� ��������
        {
            if (spisokstud[i] != NULL)
            {
                if (nomerstudaka == (*spisokstud[i]).getnomerStud())
                {
                    printf(" �� �������� ������ ��������: ");
                    fio = (*spisokstud[i]).getfio();
                    std::cout << fio;
                    //printf(" %s ", fio);
                    nomerStud = (*spisokstud[i]).getnomerStud();
                    printf(" %d ", nomerStud);
                    nomer = i;
                    f1 = 1;
                    i = AncetaStud::getkolstud();
                    printf("\n");
                }
            }
        }
    }
    if (f1 == 1)
    {
        //���������� ��������� �� ���� ����� ������
        //��������� � i ������ �������� i+1 �������
        for (i = nomer; i < (AncetaStud::getkolstud() - 1); i++)  //���������� �������� ���������� �������
        {
            fio = (*spisokstud[i + 1]).getfio();
            (*spisokstud[i]).setfio(fio);

            (*spisokstud[i]).setnomerGrup((*spisokstud[i + 1]).getnomerGrup());

            (*spisokstud[i]).setnomerStud((*spisokstud[i + 1]).getnomerStud());

            (*spisokstud[i]).setreiting((*spisokstud[i + 1]).getreiting());

            (*spisokstud[i]).settype((*spisokstud[i + 1]).gettype());

            type = (*spisokstud[i + 1]).gettype();
            if (type == OTL)
            {
                razmer = (*spisokstud[i + 1]).getuch1(dopstependia);
                (*spisokstud[i]).setuch1(razmer, dopstependia);
            }
            if (type == HOR)
            {
                razmer = (*spisokstud[i + 1]).getuch2(stependia);
                (*spisokstud[i]).setuch2(razmer, stependia);
            }
            if (type == TRO)
            {
                (*spisokstud[i + 1]).getuch3(stependia);
                (*spisokstud[i]).setuch3(stependia);

            }
            if (type == DVO)
            {
                (*spisokstud[i + 1]).getuch4(adres, telephone);
                (*spisokstud[i]).setuch4(adres, telephone);
            }

        }
        // ������������� ��������� ������
        (*spisokstud[AncetaStud::getkolstud() - 1]).AncetaStud::~AncetaStud();
        (*spisokstud[AncetaStud::getkolstud() - 1]).AncetaStud::AncetaStud();
        setkolstud(getkolstud() - 1); //��������� ������� ��������� �� 1
    }
    else
    {
        printf("\n �� ������ ������ ������� ������ �� �������\n ");
        nomer = -1;
    }

}


int searchbynamestud(AncetaStud* spisokstud[N], string  c) //���� - ����� �� ����� ����� ���������
{   // ������� ��������� ���������� ��������� ����������
    int f1 = 0;
    int i;

    string fio;
    int nomerGrup;
    int nomerStud;
    int reiting;
    typchik type;

    for (i = 0; i < AncetaStud::getkolstud(); i++)  //���� �������� ��������
    {
        if (spisokstud[i] != NULL)
        {
            fio = (*spisokstud[i]).getfio();
            if (c == fio)
            {
                nomerGrup = (*spisokstud[i]).getnomerGrup();
                nomerStud = (*spisokstud[i]).getnomerStud();
                reiting = (*spisokstud[i]).getreiting();
                type = (*spisokstud[i]).gettype();
                std::cout << fio;
                //printf(" %s ", fio);
                printf(" %d ", nomerGrup);
                printf(" %d ", nomerStud);
                printf(" %d ", reiting);
                if (type == OTL)
                {
                    char dopstependia[N];
                    int razmer1;

                    razmer1 = (*spisokstud[i]).getuch1(dopstependia);
                    printf(" %s ", dopstependia);
                    printf(" %d ", razmer1);
                }
                if (type == HOR)
                {
                    char stependia[N];
                    int razmer2;

                    razmer2 = (*spisokstud[i]).getuch2(stependia);
                    printf(" %s ", stependia);
                    printf(" %d ", razmer2);
                }
                if (type == TRO)
                {
                    char stependia[N];

                    (*spisokstud[i]).getuch3(stependia);
                    printf(" %s ", stependia);

                }
                if (type == DVO)
                {
                    char adres[N];
                    char telephone[N];

                    (*spisokstud[i]).getuch4(adres, telephone);
                    printf(" %s ", adres);
                    printf(" %s ", telephone);

                }
                f1 = f1 + 1;
                printf("\n");
            }
        }
    }
    if (f1 == 0)
    {
        printf("\n �� ������ ������� ������ �� �������\n ");
    }

    return f1;
}

int searchbyreiting(AncetaStud* spisokstud[N], int d) //���� - ����� �� �������� ����� ���������
{   // ������� ��������� ���������� ��������� ����������
    int f2 = 0;
    int i;
    string fio;
    int nomerGrup;
    int nomerStud;
    int reiting;
    typchik type;
    for (i = 0; i < AncetaStud::getkolstud(); i++)  //���� �������� ��������
    {
        if (spisokstud[i] != NULL)
        {
            reiting = (*spisokstud[i]).getreiting();
            if (d == reiting)
            {
                fio = (*spisokstud[i]).getfio();
                nomerGrup = (*spisokstud[i]).getnomerGrup();
                nomerStud = (*spisokstud[i]).getnomerStud();
                type = (*spisokstud[i]).gettype();
                std::cout << fio;
                //printf(" %s ", fio);
                printf(" %d ", nomerGrup);
                printf(" %d ", nomerStud);
                printf(" %d ", reiting);
                if (type == OTL)
                {
                    char dopstependia[N];
                    int razmer1;

                    razmer1 = (*spisokstud[i]).getuch1(dopstependia);
                    printf(" %s ", dopstependia);
                    printf(" %d ", razmer1);
                }
                if (type == HOR)
                {
                    char stependia[N];
                    int razmer2;

                    razmer2 = (*spisokstud[i]).getuch2(stependia);
                    printf(" %s ", stependia);
                    printf(" %d ", razmer2);
                }
                if (type == TRO)
                {
                    char stependia[N];

                    (*spisokstud[i]).getuch3(stependia);
                    printf(" %s ", stependia);

                }
                if (type == DVO)
                {
                    char adres[N];
                    char telephone[N];

                    (*spisokstud[i]).getuch4(adres, telephone);
                    printf(" %s ", adres);
                    printf(" %s ", telephone);

                }
                f2 = f2 + 1;
            }
        }

    }
    printf("\n");
    if (f2 == 0)
    {
        printf("\n �� ������ ������� ������ �� �������\n ");
    }

    return f2;
}

//AncetaStud* spisokstud = NULL; //����������� ��������� �� ������ ���������
AncetaStud* spisokstud[3][N]; //������ ���������� �� �������� ������ ��� ��������� ��������


