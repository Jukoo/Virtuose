#ifndef  LD_H 
#define LD_H

#define MAXBUFF  0xff
#define CWD  0x2e 
#define  ALLOWED_FALGS  ":D:d:" 

void parse_stdarg( int , char ** ,  char * )  ; 

static void usage ( char *const  * ) ;  

void listcwd ( char *)  ;  
#endif

