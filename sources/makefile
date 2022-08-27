#!/usr/bin/make  

CC :=cc 
CFLAGS=-Wall -Wextra  
SRC=$(wildcard *.c )  
OBJ=$(SRC:.c=.o) 
arch:=x86  

ifeq ($(arch),arm)  
	cc  = # arm toolchain   
endif   

bin =ld_$(arch) 

all : $(bin) 
	

$(bin) :  $(OBJ) 
	@echo -e  " [ LD ] " 
	$(CC)  $^ -o ../bin/$@  $(CFLAGS)  

%.o :  %.c
	if [ ! -d "../bin/" ];then  mkdir  "../bin/" ;fi 
	@echo -e  " [ CC ] " 
	$(CC)  -o $@ -c $<  $(CFLAGS) 


.PHONY  : clean mproper 

clean :  
	rm $(OBJ)  
	
mproper  : clean  
	rm  ../bin/$(bin) 
