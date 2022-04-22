#include <common.h>
#include <command.h>


static int do_helloworld(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[]){
	printf("helloworld\r\n");
	return 0;
}

U_BOOT_CMD(
	helloworld,
	CONFIG_SYS_MAXARGS,1,
	do_helloworld,
	"printf helloworld\n",
	"printf helloworld\n"	
)
