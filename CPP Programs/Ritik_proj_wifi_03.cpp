
#include <windows.h>
#include <iostream>
using namespace std;
#include <string>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <winuser.h>

int main()

{
  // first the hacker's color is green in command line
  printf("\a");
  cout << "Welcome RITIK "
       << "\n"
       << endl;

  char color_change_command[8];
  strcpy(color_change_command, "color a");
  system(color_change_command);

  // start fetching all wifi names
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

  int count = 0;
  int flag = 0;
  char wifi_names[20][20];

  for (int i = 0; i < text.length() - 1; i++)
  {
    flag = 0;
    if (text[i] == ':')
    {
      count++;

      flag = 1;
    }

    if (flag == 1)
    {

      for (int l = 0, j = i + 2; (int)text[j] != 13; j++, l++)
      {
        wifi_names[count - 1][l] = text[j];
        if ((int)text[j + 1] == 13)
        {

          wifi_names[count - 1][l + 1] = '\0';
        }
      }
    }
  }

  char cmd2[10][55];

  // start fetching the password with wifi names

  for (int w = 0; w < count - 1; w++)
  {

    for (int i = 0; i < count; i++)
    {

      strcpy(cmd2[i], "netsh wlan show profile  ");
    }

    strcat(cmd2[w], wifi_names[w + 1]);

    strcat(cmd2[w], " key=clear | clip");

    char cmd3[200];
    strcpy(cmd3, cmd2[w]);
    system(cmd3);

    if (OpenClipboard(NULL))
    {
      clip = GetClipboardData(CF_TEXT);
      CloseClipboard();
    }
    string text2;
    text2 = (char *)clip;

    int content_start = text2.find("Content");

    static char passw[10][65];

    content_start += 21;

    for (int j = content_start, i = 0; (int)text2[j] != 13; i++, j++)

    {
      passw[w][i] = text2[j];

      if ((int)text2[j + 1] == 13)
      {

        text2[j + 1] = '\0';
        text2[j + 2] = '\0';
        text2[j + 3] = '\0';

        break;
      }
    }

    printf("%s \t:\t%s", wifi_names[w + 1], passw[w]);

    if (text2.find("Content") == -1)
    {
      printf("\t ( Password  cannot not be found )");
    }

    cout << "\n";
  }

 printf("\n\n Have A nice day sir...\a");

  getch();
  return 0;
}
