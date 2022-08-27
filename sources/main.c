#include <stdio.h> 
#include <stdlib.h>  
#include <errno.h> 
#include <sys/types.h> 
#include <dirent.h>  
#include <errno.h>  

typedef  struct   dirent  dirent ;   

#include "include/listDir.h" 


int  main ( int argc ,  char **argv ) { 
    
    char __dirname[MAXBUFF];
    //!  by default list the current directory ... 
    listcwd(__dirname) ;  

    parse_stdarg(argc , argv ,  __dirname )  ; 
 
    DIR  *directory  =  (void *) 0  ;   
    directory =  opendir(__dirname)  ;  
    
    if  (!directory) 
    {
        perror("DIR SCAN ")  ; 
        exit(EXIT_FAILURE) ;  
    } 
    
    dirent  *dir =  NULL ;  
    
    while ( (dir = readdir(directory)) != NULL  ) 
    { 
        switch ( dir->d_type )  
        {
            case DT_REG :
                fprintf (stdout , "::[File]:%s %c" , dir->d_name ,  0xa) ;  
                break ; 
            case DT_DIR : 
                fprintf (stdout , "::[DIR]:\x1b[1;35m%s/\x1b[0m %c"  ,dir->d_name , 0xa ) ;  
                break ; 
        }
         
    }


    fprintf (stdout , "end  point \n ")  ;  
    
    return EXIT_SUCCESS  ;
} 
