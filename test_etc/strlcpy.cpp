#include <stdio.h>
#include <cstring>
#include <stdlib.h>
strlcpy(char *dst, const char *src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0 && --n != 0) {
		do {
			if ((*d++ = *s++) == 0)
				break;
		} while (--n != 0);
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++);
	}

	return(s - src - 1);	/* count does not include NUL */
}
void test (int size)
{
	char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string, size);

    printf("Copied '%s' into '%s', length %d\n",string,buffer,r);
}

int main()
{
	test(20);
	test(19);
    test(10);
    test(4);
    test(3);
    test(2);
    test(1);
    test(0);

    return(0);	
}
