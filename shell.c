#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\r\n\a"

struct cmd{

};

struct execmd {

};

struct redircmd {

};

struct pipecmd {

};

int fork1(void);
struct cmd *parasecmd(char*);

void 
runcmd(struct cmd *cmd)
{

}

int 
getcmd(char *buf, int nbuf)
{

}

int
main(void)
{

}

int 
fork1(void)
{

}


struct cmd*
execcmd(void)
{

}

struct cmd*
redircmd(struct cmd* subcmd, char *file, int type)
{

}

struct cmd*
pipecmd(struct cmd *left, struct cmd *right)
{

}

int
gettoken(char **ps, char *es, char **q, char **eq)
{
    
}