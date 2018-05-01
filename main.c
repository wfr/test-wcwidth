#define _XOPEN_SOURCE
#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "C.UTF-8");
	
	wchar_t coffee = L'☕'; // 2615
	wchar_t smiley = L'☺';  // 263A

	printf("GLIBC version %d.%d\n", __GLIBC__, __GLIBC_MINOR__);
	printf("\n");
	printf("wcwidth(%lc) == %d\n", coffee, wcwidth(coffee));
	printf("wcwidth(%lc) == %d\n", smiley, wcwidth(smiley));
	printf("\n");
	printf("0123456789\n");
	printf("%lc23456789\n", coffee);
	printf("%lc123456789\n", smiley);
}
