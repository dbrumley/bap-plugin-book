#include <stdio.h>
#include <ctype.h>

int count(char *str)
{
  int lettercount[26];
  int i, count, l;

  for(i=0; i < 26; i++) lettercount[i] = 0;
  i = 0;
  count = 0;

  while(str[i] != 0){
   l = tolower(str[i]);
   count++;
   if(l >= (int)'a' && l <= (int)'z'){
      lettercount[l-(int)'a'] ++;
   }
   i++;
  }
  for(i =0; i < 26; i++)
    printf("%c: %d ", i+'a', lettercount[i]);
  printf("\n");
  return count;
}

int main(int argc, char *argv[])
{
  if(argc > 1) {
    return count(argv[1]);
  }  else {
    printf("Usage: %s <string>\n", argv[0]);
    printf("\tPrints a count for each letter in <string>\n");
    printf("\tReturns total number of characters counted.\n");
  }
  return 0;
}
