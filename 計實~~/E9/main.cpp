#include "SecretSystem.h"
#include "SecretSystem.cpp"

#define MAX 100//�w�qMAX�O100

using namespace std;
int main()
{
    Encrypt s;
    char en[MAX];
    int de[MAX];
    int key;
    int choose;
reput:
    cout << "Please choose (1)Encrypt (2)Decrypt or (3)break : ";
    cin >> choose;
    while (choose!=3)//���3,break
    {

        if(choose>3||choose<1)
        {
            cout << "Input error!!!" << endl;
            goto reput;//���b,����J
        }
        else if(choose==1)
        {
            cout << "Input your string for encoding:" << endl;
            cin.ignore();//�M��,�]���e����cin�F,cin.getline���S��
            cin.getline(en,MAX);
            cout << "Input your key: ";
            cin >> key;
            s.setkey(key);
            cout << "Encrypt code are: ";
            s.startEncrypt(en);//�I�s�Ƶ{��
            cout << endl;
            goto reput;
        }
        else if(choose==2)
        {
            bool debug=1;//����,�[key��W�X�d��
            cout << "Input your string for decoding: (-1 = end) " << endl;
            //cin.ignore();
            for(int i=0; ; i++)
            {
                cin >> de[i];
                if(de[i]==-1)
                {
                    break;//�s�J,�J��-1,break
                }
            }
            cout << "Input your key: ";
            cin >> key;
            s.setkey(key);

            cout << "Decrypt code are: ";
            for(int i=0;de[i]!=-1 ; i++)
            {

                    if( de[i]+key<32||de[i]+key>126)
                    {
                        cout << "decode input error!" << endl;
                        debug=0;
                        break;//���b
                    }

            }
            if(debug==1)
            {

                s.startDecrypt(de);//�I�s�Ƶ{��
                cout << endl;
            }
            goto reput;
        }
    }
    return 0;
}
