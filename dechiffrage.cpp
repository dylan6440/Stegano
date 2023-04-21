#include "dechiffrage.h"
#include <iostream>
#include <QString>
using namespace std;

dechiffrage::dechiffrage(QObject *parent) : QThread(parent)
{

}

string dechiffrage::s_Cesar(string s_str, int32_t s32_shift)
{
    int32_t i = 0;
    while (s_str[i] != '\0') {
      if (s_str[i] >= 'A' && s_str[i]<= 'Z') {
          char letter_t = s_str[i] - 'A';
          letter_t += s32_shift;
          letter_t = letter_t % 26;
          s_str[i] = letter_t + 'A';
      }
      i++;
    }
    return s_str;
}

void dechiffrage::dechiffre(QString s_PathDirectory, QString s_ImagePath, QString s_PassWord)
{
    string s_password;
    s_password=s_PassWord.toUtf8().constData();
    s_password = s_Cesar(s_password,16);
    QString s_command = "steghide extract -sf "+ s_ImagePath  + " -xf "+ s_PathDirectory +"message.txt -p" + s_PassWord;
    FILE* pipePtr = popen(s_command.toStdString().c_str(), "r");
    if (pipePtr == nullptr)
    {
        cerr<<("popen");
    }
    if (pclose(pipePtr) != 0)
    {
        cerr<<("pclose");
    }

}

QString dechiffrage::message(QString s_PathDirectory)
{
    string result="";
    QString fileMessage =s_PathDirectory+"/message.txt";
    FILE* pipePtr = fopen(fileMessage.toStdString().c_str(), "r");
    vector<string> s_lines;
        char* c_line = nullptr;
        size_t len = 0;
        if (pipePtr == nullptr)
        {
            cerr<<("popen");
        }
        while ((getline(&c_line, &len, pipePtr)) != -1)
        {
            s_lines.push_back(c_line);
        }
        for (const auto &i : s_lines)
        {
            string s_code(i.begin(),i.end());
            result = s_Cesar(s_code,16);
        }
        cout << endl;
        if (pclose(pipePtr) != 0)
        {
            cerr<<("pclose");
        }
        free(c_line);
        return QString::fromStdString(result);
}
