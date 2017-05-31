#ifndef SECRETSYSTEM_INCLUDED
#define SECRETSYSTEM_INCLUDED

#define MAX 100

using namespace std;

class Encrypt{

public :
void startEncrypt(char[]);
void startDecrypt(int[]);
void setkey(int);
private :
char mystr[MAX];
int str_int[MAX];
int _key;
};

#endif // DD_H_INCLUDED
