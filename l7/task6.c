char *insert(const char *src, const char *str, int index)
{
	unsigned int strLen = strlen(str);
	unsigned int srcLen = strlen(src);

	char *newstr = (char*)malloc((strLen + srcLen + 1 ), sizeof(char));
	
	char *curStr = newstr;
	char *p = src + index;
	for (const char *curSrc = src;
		*curSrc;
		++curSrc, ++curStr)
	{
		if (curSrc == p)
		{
			for (const char *curSrc = str;
				*curSrc;
				++curSrc, ++curStr)
			{
				*curStr = *curSrc;
			}
		}
		*curStr = *curSrc;
	}
	*curStr = 0;
	return newstr;
}