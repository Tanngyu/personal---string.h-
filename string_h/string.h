//返回字符串的长度
int strlen(char s[]) {
	int strlen = 0;
	int  i = 0;
	while (s[i] != NULL) {
		strlen++;
		i++;
	}
	return strlen;
}
//将字符串src复制到dest
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
//将字符串的前n个字符复制到dext
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
//将字符串src连接到dext的末尾
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
//将字符串src的前n个字符连接到dest的末尾
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
//比较字符串str1和str2的大小，返回一个整数值
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
//比较字符串str1和str2的前n个字符的大小，返回一个整数值
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
  //在字符串s中查找字符c的第一个匹配，返回一个指向匹配字符的指针
char * strchr(char s[], char c) {
	for (int i = 0; i <= strlen(s) - 1; i++) {
		if (s[i] == c) {
			return &s[i] ;
		}
	}
	return NULL;
}
  //strrchr(s, c)：在字符串s中查找字符c的最后一个匹配，返回一个指向匹配字符的指针
char* strrchr(char s[], char c) {
	for (int i = strlen(s) - 1; i >= 0 ; i--) {
		if (s[i] == c) {
			return &s[i];
		}
	}
	return NULL;
}
  //在字符串s1中查找字符串s2的第一个匹配，返回一个指向匹配字符串的指针
char* strstr(char s1[], char s2[]) { //是一个长串元素的遍历过程，得好好研究研究！
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (int i = 0; i <= len1 - len2; i++) { //如果len1<len2那么i <负数是恒成立的，直接跳转到134行
		int j;
		//
		for (j = 0; j < len2; j++) {
			if (s1[i + j] != s2[j]) {
				break;
			}
		}
		//把s2作为“尺子”来一个个往后对比
		if (j == len2) {
			return &s1[i];
		}//如果“尺子”和s1的字符完全一致。那么就把“尺子”第一个值所对应的s1中的值返回出来
	}
	return NULL;//遍历结束仍然没有找到s2则返回空指针
}
