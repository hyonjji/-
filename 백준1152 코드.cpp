//백준1152.단어의개수
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    cout << "문장을 입력하시오: ";
    getline(cin, sentence);
    int num = 0;
    bool space = true;
    for (int i=0; i<sentence.length(); i++)
    {
        if(sentence[i]==' ')
        {
            space = true;
        }
        else if (space)
        {
            space = false;
            num++;
        }
    }
    cout << num;
    return 0;
}