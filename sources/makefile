#!/usr/bin/make  

CC :=cc 
CFLAGS=-Wall -Wextra  
SRC=$(wildcard *.c )  
OBJ=$(SRC:.c=.o) 
arch:=x86  

ifneq ($(CC),cc)  
	arch= arm   
endif  
bin =ld_$(arch) 

all : $(bin) 
	

$(bin) :  $(OBJ) 
	@echo -e  " [ LD ] " 
	$(CC)  $^ -o ../bin/$@  $(CFLAGS)  

%.o :  %.c
	@echo -e  " [ CC ] " 
	$(CC)  -o $@ -c $<  $(CFLAGS) 


.PHONY  : clean mproper 

clean :  
	rm $(OBJ)  
	
mproper  : clean  
	rm  ../bin/$(bin) 
