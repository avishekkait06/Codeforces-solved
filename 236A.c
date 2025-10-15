#include <stdio.h>
#include <string.h>

int main()
{
  char str[101];
  scanf("%100s", str);

  int freq[256] = {0};
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    unsigned char ch = str[i];
    if (!freq[ch])
    {
      freq[ch] = 1;
      count++;
    }
  }
  if (count % 2 == 0)
    printf("CHAT WITH HER!");
else
printf("IGNORE HIM!");
    return 0;
}