#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[]="jingle bells jingle bells jingle all the way "
    "Oh what fun it is to ride In a one horse open sleigh jingle "
    "bells jingle bells jingle all the way Oh what fun it is to ride "
    "In a one horse open sleigh Dashing through the snow In a one horse "
    "open sleigh Oer the fields we go Laughing all the way Bells on bob "
    "tails ring Making spirits bright What fun it is to laugh and sing A "
    "sleighing song tonight ";
    char word[100][100];//���r
    int wordcount[100];//�p�X�{����
    int i=0,j=0,k=0;
    bool check[100]={0};//�P�_�O�_�p��L
    while(str[i]!='\0')//�q�峹�Y�]���
    {
       if(str[i]!=' ')//���r���ܴN�s�J�}�C
       {
         word[k][j]=str[i];
         j++;
       }
       else//�Ů�N���s�U�ӳ�r
       {
         word[k][j]='\0';
         j=0;
         k++;//K�O�`�@����r��
       }
       i++;
    }
    for(int t=0;t<k;t++)//�P�_��r�X�{�X���A��᭱����r�P�_�O�_�@��
    {
      wordcount[t]=1;//�@�}�l���Ƭ��@�A���᭱����
      if(check[t]==0)//���s�Ȭ��s�h�p��count�A���e�S�X�{�L
      {

          for(int z=t+1;z<k;z++)
          {

              if(strcmp(word[t],word[z])==0)//�p�⦸��
              {
                  check[z]=1;//�Y��L�h�ܤ@
                  wordcount[t]++;
              }

          }
     /* for(int r=t;r>=0;r--)
      {
          check[t]=0;
          if(word[t]==word[r])
          {
            check[t]=0;
          }
          else
          {
            check[t]=1;
          }
      }*/
      }
      if(check[t]==0)
      { cout << word[t] << ": " << wordcount[t] << endl; }//�L�X
    }
    return 0;
}
