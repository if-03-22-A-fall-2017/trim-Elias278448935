/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "shortcut.h"
 #include "trim.h"
#include <string.h>




 void trim(const char* str, char* trimmed)
 {
   int ende = 0;
   int anfang  = 0;
   int count = 0;
   int boolian = 0;

    for (int i = 0; i < STRLEN; i++)
    {
      if(str[i] != ' ' && boolian != 1)
      {
       anfang = i;
       boolian = 1;
      }
    }

    for (int i = 0 ; i < STRLEN; i++)
    {
      if(str[i] != ' ' && str[i] != '\0')
      {
        ende = i;
      }
    }

    for (int i = 0; i < STRLEN; i++)
    {
      if(i >= anfang && i <= ende)
      {
        trimmed[count] = str[i];
        count++;

      }
    }






  /* int flag = 0;
   int count = 0;

    for (int i = 0; i < STRLEN; i++)
    {
      if(str[i] != ' ')
      {
        flag = 1;
      }
        if(flag = 1)
        {
          trimmed[i] = str[count];
          count++;
        }



    }
*/

 }
