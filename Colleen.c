#include <stdio.h>
/*
** commentaire
*/
void	f(char *s)
{
	printf(s,10,10,10,10,9,9,10,10,9,10,10,10,9,9,10,10,9,9,34,s,34,10,9,10,9,10,10);
}

int		main()
{
	/*
	** commentaire
	*/
	char	*s = "#include <stdio.h>%c/*%c** commentaire%c*/%c"
		"%cvoid%cf(char *s)%c{%c"
		"%cprintf(s, 10, 10, 10, 10, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 10, 10, 9, 34, s, 34, 10, 10, 10);%c}%c%c"
		"int%c%cmain()%c{%c%cchar%c*s = %c%s%c;%c%cf(s);%c%creturn 0;%c}%c";
	f(s);
	return (0);
}
