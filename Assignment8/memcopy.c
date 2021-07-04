/* Program to implement mem copy operation with void pointers */
#include<stdio.h>


unsigned int strlen(const char* src)
{
	unsigned int length = 0;
	
	while (*src++ != '\0')
	{
		length++;
	}
}

void memcpy(void* dest, const void* src, size_t count)
{
	char* d = (char *)dest;
	const char* s = (const char* )src;

	while (count--)
  {	
    *d++ = *s++;
  }
}


int main()
{
	const char src[] = "Hello World!";
	char dest[20] = {0};

	memcpy(dest, src, strlen(src));

	printf("dest: %s\n", dest);
	
  return 0;
}


#if 0

Output: 
dest: Hello World!

#endif
