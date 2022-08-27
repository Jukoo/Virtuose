#include <stdlib.h>
#include <stdio.h> 
#include <unistd.h>   
#include <string.h>  

#include "include/listDir.h" 

static  void  usage  ( char *const *  argv )  { 
    fprintf(stdout ,  "%s   <options>  dirname  \nAvailable option  -d -D \n" , argv[0]) ; 

}
void parse_stdarg(int argc,  char **argv ,  char * stdoptval  )  {
    int  optparse  = 0 ; 
    char  *allowflag =  ":D:d:"  ;   
    while ( ~(optparse =getopt(argc  , argv , allowflag))) 
    {
        switch(optparse) 
        {
            case  'd': 
                memcpy(stdoptval ,  optarg   ,  0xff )   ; 
                break  ;
                
            case  'D' :   
                memcpy(stdoptval ,  optarg   ,  0xff )   ; 
                break ; 
                
            default :  
                fprintf (stdout , "sorry doesn't recognize %c \n" , optopt);
                usage(argv) ;  
                exit(EXIT_FAILURE)  ; 
        }
    } 
 
}

void listcwd (  char *__dirname  ) { 
    
    void *_=(void * ) 0 ; 
    _  = memset(__dirname , CWD  ,  1) ;  

    if (_ == (void *) 0 ){ 
        fprintf(stderr , "cannot set cwd  dlist fail\n") ; 
        exit(EXIT_FAILURE) ; 
    }
}
