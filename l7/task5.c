char *strcat (const char *first, const char *second)
{
	unsigned int strLen = strlen(first);
	unsigned int substrlen = strlen(second);

	char *newstr = (char*)malloc(strLen + substrlen + 1, sizeof(char));

	char *curDst = newstr;
	for (const char *curSrc = first;
		*curSrc;
		++curSrc, ++curDst)
	{
		*curDst = *curSrc;
	}
	for (const char *curSrc = second;
		*curSrc;
		++curSrc, ++curDst)
	{
		*curDst = *curSrc;
	}
	*curDst = 0;
	return newstr;

}