#include "SecretSystem.h"//�ޥ�class�����Y��
#include <iostream>
#include <stdlib.h>
using namespace std;
void Encrypt::setkey(int key)
{
   _key=key;//�s�Jprivate
}

void Encrypt::startEncrypt(char en[])
{
   for(int i=0;en[i]!='\0';i++)
   {
       str_int[i]=(int)en[i]-_key;//��key,�s�Jprivate
       cout << str_int[i] << " ";
   }
}
void Encrypt::startDecrypt(int de[])
{
     for(int i=0;de[i]!=-1;i++)
     {

         mystr[i]=(char)(de[i]+_key);//�[key,�s�Jprivate
         cout << mystr[i];
     }
}
