
#include<bits/stdc++.h>
using namespace std;


char *removeDupsSorted(char *str)
{
	int res_ind = 1, ip_ind = 1,temp,i,j;


	while (*(str + ip_ind))
	{
		if (*(str + ip_ind) != *(str + ip_ind - 1))
		{
			*(str + res_ind) = *(str + ip_ind);
			res_ind++;
		}
		ip_ind++;
	}


	*(str + res_ind) = '\0';

   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
	return str;
}



char *removeDups(char *str)
{
int n = strlen(str);

sort(str, str+n);

return removeDupsSorted(str);
}

int main()
{
char str[] = "aabdceaaabbbcd";
cout << removeDups(str);
return 0;
}
