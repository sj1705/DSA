#include <iostream>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    int i,vcount=0;int words=1;
    for(i=0;'\0'!=name[i];i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        vcount++;
        if(name[i]==' ')
        words++;


    }
    cout << "length of name is:" << i<<endl;
    cout << "count of vowels:"<<vcount<<endl;
    cout << "count of words:"<<words;
}