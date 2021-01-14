#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
  char string1[27];
  char string2[] = "abcdefghijklmnopqrstuvwxyz";


  int i= 0; 
  for (char c = 'a'; c<= 'z'; c++)  {
      string1[i] = c;
     i++;
}

string1[26] = '\0';

  if (strcmp(string1, string2) == 0) {
     printf("The strings are identical!\n");
  } else {
    printf("The strings are DIFFRENT!\n");
}


  for (int  i = 0; i < 26; i++) {
      string1[i] = string1[i] - 32;
  }


   if (strcmp(string1, string2) == 0) {
     printf("The strings are identical!\n");
  } else {
    printf("The strings are DIFFRENT!\n");
}



char string3[54];
strcat(string3, string1);
strcat(string3, string2);



printf("%s\n", string1);
printf("%s\n", string2);
printf("%s\n", string3);

}

