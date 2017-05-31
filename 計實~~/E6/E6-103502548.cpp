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
    char word[100][100];//放單字
    int wordcount[100];//計出現次數
    int i=0,j=0,k=0;
    bool check[100]={0};//判斷是否計算過
    while(str[i]!='\0')//從文章頭跑到尾
    {
       if(str[i]!=' ')//有字的話就存入陣列
       {
         word[k][j]=str[i];
         j++;
       }
       else//空格就換存下個單字
       {
         word[k][j]='\0';
         j=0;
         k++;//K是總共的單字數
       }
       i++;
    }
    for(int t=0;t<k;t++)//判斷單字出現幾次，跟後面的單字判斷是否一樣
    {
      wordcount[t]=1;//一開始次數為一，跟其後面的比
      if(check[t]==0)//不零值為零則計算count，表之前沒出現過
      {

          for(int z=t+1;z<k;z++)
          {

              if(strcmp(word[t],word[z])==0)//計算次數
              {
                  check[z]=1;//若算過則變一
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
      { cout << word[t] << ": " << wordcount[t] << endl; }//印出
    }
    return 0;
}
