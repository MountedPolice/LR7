#include <malloc.h>
char *strcpy(const char *src)
{
	int len = strlen(src);
	char *dest = (char*)malloc(len, sizeof(char));
	char *curDst = dest;
	for (const char *curSrc = src;
		*curSrc;
		++curSrc, ++curDst)
	{

		*curDst = *curSrc;
	}
	*curDst = 0;
	return dest;
}
