#!/usr/bin/make  

export CC 
export CFLAGS 
SRC=sources/ 
arch:=x86  
bin=lsd_$(arch) 



all : $(bin)  
	

$(bin) :  

	@cd  $(SRC) && $(MAKE) 

.PHONY :  clean  mproper  

clean  :  
	@cd $(SRC) && $(MAKE) $@  
	
mproper : 
	@cd $(SRC) && $(MAKE) $@  
