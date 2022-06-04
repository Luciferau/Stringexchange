/*#include<stdio.h>
#include<string.h>



void fun(char* str1, char* str2, char* str3)
{
	int i, j, k, done;
	int n = strlen(str1);
	char temp[100];
	int count;
	int gap;
	for (i = 0; i < n; i++)
	{
		if (str1[i] == str2[0])
		{
			done = 0;   
			for (j = i, k = 0; k < strlen(str2); j++, k++)
			{
				if (str1[j] != str2[k])
				{
					done = 1;
					gap = k;
					break;
				}
			}

			if (done == 0)  
			{
				for (j = i + strlen(str2), k = 0; j < strlen(str1); j++, k++) //±£ÁôÔ­×Ö·û´®Ê£ÓàµÄÄÚÈİ 
				{
					temp[k] = str1[j]; 
				}
				temp[k] = '\0'; 

				for (j = i, k = 0; k < strlen(str3); j++, k++)
				{
					str1[j] = str3[k];    
					count++;
				}

				for (k = 0; k < strlen(temp); j++, k++)   
				{
					str1[j] = temp[k];
				}
				str1[j] = '\0';
				gap = strlen(str2);

			}
			else {
				gap = 1;
			}
		}
	}
	return;
}
int main()
{
	char str1[100];
	char str2[100];
	char str3[100];
	gets(str1);
	gets(str2);
	gets(str3);
	fun(str1, str2, str3);
	puts(str1);
	return 0;

}
*/
/*#include<stdio.h>

int main(void)
{
	char a[80], b[80]; 
	int i;
	for (i = 0; a[i] != '\0'; i++)
		scanf("%c", &a[i]);
		for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 65 && a[i] <= 90)
			b[i] = 155 - a[i];
	else
		b[i] = a[i];
	}
	for (i = 0; b[i] != '\0'; i++)
	printf("%c", b[i]);
	return 0;
}
*/
