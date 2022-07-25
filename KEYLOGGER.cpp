#define _WINSOCK_DEPRECATED_NO_WARNINGS /* we use winsock utilities and we do 
not want the compiler to complain about older functionalities used, since the
below code is sufficient for our needs. */
#pragma comment(lib, "Ws2_32.lib") /* we need the Ws2_32.lib library in order 
to use sockets (networking) */
/* now comes headers which provide various utilities for our program: */
#include <iostream> //standard input/output utilities
#include <winsock2.h> //networking utilities
#include <stdio.h> //standard input/output utilities
#include <stdlib.h> //standard input/output utilities
#include <dirent.h> //directory utilities
#include <string> //string utilities

char* userDirectory() /* char* before a functions’ name means it will return 
a pointer to a string */
{
 char* pPath; // we define a variable of type pointer to char and name it 
pPath;
 pPath = getenv ("USERPROFILE"); /* we use the function getenv that is 
shipped with the previously included headers in order to know the user’s 
directory location – in this case, it is kept in an environment variable of 
the Windows system called “userprofile” */
 if (pPath!=NULL) //check if the retrieved path is not empty
 {
 return pPath; //return the directory path and exit the function
 } else { /* if the path is empty which means that it was not possible to 
retrieve the path */
 perror(""); //print the error and exit
} 
}
