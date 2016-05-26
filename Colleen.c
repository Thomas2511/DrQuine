#include <stdio.h>
/*
	commentaire
*/
void f(char *s)
{
	printf(s,10,10,9,10,10,10,10,9,10,10,10,10,10,9,10,9,9,10,9,10,9,34,s,34,10,9,10,9,10,10);
}

int main()
{
	/*
		commentaire
	*/
	char *s = "#include <stdio.h>%c/*%c%ccommentaire%c*/%cvoid f(char *s)%c{%c%cprintf(s,10,10,9,10,10,10,10,9,10,10,10,10,10,9,10,9,9,10,9,10,9,34,s,34,10,9,10,9,10,10);%c}%c%cint main()%c{%c%c/*%c%c%ccommentaire%c%c*/%c%cchar *s = %c%s%c;%c%cf(s);%c%creturn (0);%c}%c";
	f(s);
	return (0);
}
