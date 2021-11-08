char *delete(char *str, const char *substr)
{
	unsigned int strLen = strlen(str);
	unsigned int substrlen = strlen(substr);
	char *point = find(str, substr);
	char *newstr = (char*)malloc((strLen - substrlen+1), sizeof(char));

	char *curDst = newstr;
	for (const char *curSrc = str;
		*curSrc;
		++curSrc, ++curDst)
	{
		if (curSrc == point)
		{ curSrc += substrlen; }
		*curDst = *curSrc;
	}
	*curDst = 0;
	return newstr;
}