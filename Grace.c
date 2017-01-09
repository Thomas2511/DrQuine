#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/*
	commentaire
*/
#define CHAR(x) char *s = #x; x
#define OPEN *stream = fopen("Grace_kid.c", "w+")
#define MAIN() int main() { FILE OPEN; CHAR(fprintf(stream, "#include <stdio.h>\n#include <fcntl.h>\n#include <unistd.h>\n/*\n\tcommentaire\n*/\n#define CHAR(x) char *s = #x; x\n#define OPEN *stream = fopen(\"Grace_kid.c\", \"w+\")\n#define MAIN() int main() { FILE OPEN; CHAR(%s); }\nMAIN()\n", s)); }
MAIN()
