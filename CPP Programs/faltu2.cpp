
#include <windows.h>
#include <iostream>
using namespace std;
#include <string>
#include <string.h>
#include <stdio.h>
#include<conio.h>

int main()

{
    char cmd[200];
    strcpy(cmd, "netsh wlan show profile | clip");
    system(cmd);

    HANDLE clip;

    if (OpenClipboard(NULL))
    {
        clip = GetClipboardData(CF_TEXT);
        CloseClipboard();
    }
    string text;
    text = (char *)clip;
  //  cout << (char *)clip << endl;

    // cout<<"\n\n "<<text.length()<<"\n\n";
    int count = 0;
    int flag = 0;
    char wifi_names[20][20];

    for (int i = 0; i < text.length() - 1; i++)
    {
        flag = 0;
        if (text[i] == ':')
        {
            count++;

            // for (int k = i; k < i + 10; k++)
            // {
            //     printf("%d->%c ", text[k], text[k]);
            // }

            // cout << "\n\n";

            //  break;
            flag = 1;
        }

        if (flag == 1)
        {
            //  cout<<i<<" ->  "<<text[i+2];
            //               cout<<"\n\n";

            for ( int l=0, j = i + 2; (int)text[j] != 13; j++,l++)
            {
                wifi_names[count - 1][l] = text[j];
                if((int)text[j+1] == 13)
                {
                  
                                  wifi_names[count - 1][l+1] = '\0';

                  
                }
              //  printf("wifi names[%d][%d] ->-> %c \n",count-1,l,text[j]);

                
            }
            
        }
    }
    cout << "\n All the "<< count-1 <<" wifi names are \n";

    for (int i=0;i<count;i++)
    {
     
      printf("%s \n",wifi_names[i]);

    }
    // cout<<"\n\n"<<;

    // for(int i=0)


   // cout << count;

 

   
   getch();
    return 0;
}
