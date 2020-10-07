#include <lib.h>
#include <stdio.h>
#include <string.h>

int
main(int argc, char **argv)
{
	int i, nflag;
	//printf("echo runing!\n");


	//printf("argc:%d argv:%x ADDR:%x\n",argc,argv,&argc);

	nflag = 0;
	if (argc > 1 && strcmp(argv[1], "-n") == 0) {
		nflag = 1;
		argc--;
		argv++;
	}
	for (i = 1; i < argc; i++) {
		if (i > 1)
			write(1, " ", 1);
		write(1, argv[i], strlen(argv[i]));
	}
	if (!nflag)
		write(1, "\n", 1);
	return 0;
}
