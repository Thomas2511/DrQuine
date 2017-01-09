#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#define FT(x) char *s = #x; x

int main()
{
	FILE *f;
	char filename[10] = "Sully_x.c\0";
	char cmd[38] = "clang Sully_x.c -o Sully_x; ./Sully_x\0";
	int i = 5;

	if (i > 0)
	{
		filename[6] = (i - 1) + 48;
		cmd[12] = (i - 1) + 48;
		cmd[25] = (i - 1) + 48;
		cmd[36] = (i - 1) + 48;
		f = fopen(filename, "w+");
		FT(fprintf(f, "#include <stdio.h>\n#include <fcntl.h>\n#include <stdlib.h>\n#define FT(x) char *s = #x; x\n\nint main()\n{\n\tFILE *f;\n\tchar filename[10] = \"Sully_x.c\\0\";\n\tchar cmd[38] = \"clang Sully_x.c -o Sully_x; ./Sully_x\\0\";\n\tint i = %c;\n\n\tif (i > 0)\n\t{\n\t\tfilename[6] = (i - 1) + 48;\n\t\tcmd[12] = (i - 1) + 48;\n\t\tcmd[25] = (i - 1) + 48;\n\t\tcmd[36] = (i - 1) + 48;\n\t\tf = fopen(filename, \"w+\");\n\t\tFT(%s)\n\t\tfclose(f);\n\t\tsystem(cmd);\n\t}\n\treturn (0);\n}\n", (i - 1) + 48, s);)
		fclose(f);
		system(cmd);
	}
	return (0);
}
