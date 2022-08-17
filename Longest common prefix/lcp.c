
#include <stdio.h>
#include <stdlib.h>

char* lcp(char **strs, int n, char *dest);

int main() {
  
  char **strings;
  char dest[10];
  int count;

  scanf("%d", &count);//Specify to how many word take from user.

  strings = (char**)malloc(count * sizeof(char*));//Allocate memory fot strings

  for(int i = 0; i < count; ++i)
  {
    strings[i] = (char*)malloc(10 * sizeof(char));//Allocate memory for letters of strings(max 10)
    scanf("%s",strings[i]);//create char arrays (letters)
  }

  lcp(strings, count, dest);

  printf("\n%s\n", dest);

  for(int i = 0; i < count; ++i) //frees memorie that we allocated 
  {
    free(strings[i]);
  }   
  free(strings);

  return 0;
}

char* lcp(char **strs, int n, char *dest)
{
  int i,j;
  char temp;
  int loopFlag = 0;

  for(i = 0; i < 10; ++i)
  {
    dest[i] = '\0';
    temp = strs[0][i];

    for(j=1;j < n;j++)//check all words 
    {
      if(strs[j][i] != temp)
      {
        loopFlag = 1;
        break;
      }
    }
    if(loopFlag)
    {
      break;
    }
    dest[i] = temp;
  }

  return dest;
} 
