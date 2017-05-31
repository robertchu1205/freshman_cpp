#include "SecretSystem.h"//引用class的標頭檔
#include <iostream>
#include <stdlib.h>
using namespace std;
void Encrypt::setkey(int key)
{
   _key=key;//存入private
}

void Encrypt::startEncrypt(char en[])
{
   for(int i=0;en[i]!='\0';i++)
   {
       str_int[i]=(int)en[i]-_key;//減key,存入private
       cout << str_int[i] << " ";
   }
}
void Encrypt::startDecrypt(int de[])
{
     for(int i=0;de[i]!=-1;i++)
     {

         mystr[i]=(char)(de[i]+_key);//加key,存入private
         cout << mystr[i];
     }
}
