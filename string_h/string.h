//�����ַ����ĳ���
int strlen(char s[]) {
	int strlen = 0;
	int  i = 0;
	while (s[i] != NULL) {
		strlen++;
		i++;
	}
	return strlen;
}
//���ַ���src���Ƶ�dest
void strcpy(char dext[], char src[]) {
	int i = 0;
	while (src[i] != NULL) {
		dext[i] = src[i];
		if (src[i + 1] == NULL) {
			i++;
			while (dext[i] != NULL) {
				dext[i] = NULL;
			}
			return;
		}
		i++;
	}
}
//���ַ�����ǰn���ַ����Ƶ�dext
void strncpy(char dext[], char src[], int  n) {
	int i = 0;
	while (src[i] != NULL) {
		if (i <= n - 1) {
			dext[i] = src[i];
			if (src[i + 1] == NULL) {
				i++;
				while (dext[i] != NULL) {
					dext[i] = NULL;
				}
				return;
			}
		}
		else { return; }
		i++;
	}
}
//���ַ���src���ӵ�dext��ĩβ
void strcat(char dext[], char src[]) {
	int i = 0, j = 0;
	while (dext[i] != NULL) {
		i++;
	}
	while (src[j] != NULL) {
		dext[i] = src[j];
		i++;
		j++;
	}
}
//���ַ���src��ǰn���ַ����ӵ�dest��ĩβ
void strncat(char dext[], char src[], int n) {
	int i = 0, j = 0;
	while (dext[i] != NULL) {
		i++;
	}
	while (src[j] != NULL) {
		if (j <= n - 1) {
			dext[i] = src[j];
			i++;
			j++;
		}
		else { return; }
	}
}
//�Ƚ��ַ���str1��str2�Ĵ�С������һ������ֵ
int strcmp(char str1[], char str2[]) {
	int maxlen = strlen(str1) >= strlen(str2) ? strlen(str1) : strlen(str2);
	for (int i = 0; i <= maxlen; i++) {
		if (str1[i] != str2[i]) {
			return i + 1;
		}
		else  if (str1[i] == NULL && str2[i] == NULL)
		{
			return 0;
		};
	}
}
//�Ƚ��ַ���str1��str2��ǰn���ַ��Ĵ�С������һ������ֵ
int strncmp(char str1[], char str2[], int  n) {
	int maxlen = strlen(str1) >= strlen(str2) ? strlen(str1) : strlen(str2);
	for (int i = 0; i <= maxlen; i++) {
		if (i <= n - 1) {
			if (str1[i] != str2[i]) {
				return i + 1;
			}
			else  if (str1[i] == NULL && str2[i] == NULL)
			{
				return 0;
			};
		}
		else { return 0; }
	}
}
  //���ַ���s�в����ַ�c�ĵ�һ��ƥ�䣬����һ��ָ��ƥ���ַ���ָ��
char * strchr(char s[], char c) {
	for (int i = 0; i <= strlen(s) - 1; i++) {
		if (s[i] == c) {
			return &s[i] ;
		}
	}
	return NULL;
}
  //strrchr(s, c)�����ַ���s�в����ַ�c�����һ��ƥ�䣬����һ��ָ��ƥ���ַ���ָ��
char* strrchr(char s[], char c) {
	for (int i = strlen(s) - 1; i >= 0 ; i--) {
		if (s[i] == c) {
			return &s[i];
		}
	}
	return NULL;
}
  //���ַ���s1�в����ַ���s2�ĵ�һ��ƥ�䣬����һ��ָ��ƥ���ַ�����ָ��
char* strstr(char s1[], char s2[]) { //��һ������Ԫ�صı������̣��úú��о��о���
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (int i = 0; i <= len1 - len2; i++) { //���len1<len2��ôi <�����Ǻ�����ģ�ֱ����ת��134��
		int j;
		//
		for (j = 0; j < len2; j++) {
			if (s1[i + j] != s2[j]) {
				break;
			}
		}
		//��s2��Ϊ�����ӡ���һ��������Ա�
		if (j == len2) {
			return &s1[i];
		}//��������ӡ���s1���ַ���ȫһ�¡���ô�Ͱѡ����ӡ���һ��ֵ����Ӧ��s1�е�ֵ���س���
	}
	return NULL;//����������Ȼû���ҵ�s2�򷵻ؿ�ָ��
}
