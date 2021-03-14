#include <windows.h>
#include <iostream>
using namespace std;
#include<string>
#include<string.h>

int main()
{

 char cmd[200];
    strcpy(cmd, "netsh wlan show profile | clip");
    system(cmd);



    HANDLE clip;
        
    if (OpenClipboard(NULL)) {
      clip = GetClipboardData(CF_TEXT);
      CloseClipboard();
    }
    string text;
    text = (char*)clip;
  //  cout << (char*)clip << endl;

   string s1="Racker ",s2=" Rank",s3=" hai ye to ?";


   cout<<s1+s2+s3;

//strcpy(ch,s1+s2+s3);





    
    return 0;
}















   // FUCK CLIP*

