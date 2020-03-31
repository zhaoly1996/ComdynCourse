/* -----------------------------------------------------------

   User A class

--------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include "user_a.h"

UserA::UserA(char *tname, int tid)
{
  int n = strlen(tname);
  name = new char[n+1];
  strcpy(name,tname);

  id = tid;
}


void UserA::Show()
{
  printf("\n User %s have ID %d\n", name, id);
}
