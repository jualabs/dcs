
SIM_PROG=ex0
# same as SIM_PROG, capitalized
SIM_MOD=Onetask
SIM_NODE=onetask
CONTRACT_NODE=onetask

# This generic Makefile does not allow contract and simulated node in
# two different modules (can be two different nodes, though)
CONTRACT_PROG=$(SIM_PROG)
CONTRACT_MOD=$(SIM_MOD)

CC=gcc
HEPTC=heptc
HEPTS=hepts
SIGALI=/home/ubuntu/Sigali-2.4/bin/sigali

HEPT_LIB_C=/usr/local/lib/heptagon/c

CTRLR_PROG=$(CONTRACT_NODE)_controller

HEPT_PATH=$(shell pwd)

# Path to C headers
HEPT_CINCLUDES=
CFLAGS= $(HEPT_CINCLUDES) -I $(CTRLR_PROG)_c -I $(HEPT_LIB_C) -pipe

HEPT_SOURCES = $(wildcard *.ept)
HEPT_MODNAMES = $(patsubst %.ept,%,$(HEPT_SOURCES))

HEPT_C_FILES = $(shell echo $(HEPT_SOURCES) | sed -r 's+([^ ]*).ept+\1_c/\1.c+g')
HEPT_C_DIRS = $(patsubst %.ept,%_c,$(HEPT_SOURCES))
HEPT_Z3Z_DIRS = $(patsubst %.ept,%_z3z,$(HEPT_SOURCES))
HEPT_OBJS = $(HEPT_C_FILES:.c=.o)

CFLAGS += $(patsubst %, -I %,$(HEPT_C_DIRS))

CTRLR_C_FILES = $(CTRLR_PROG)_c/$(CTRLR_PROG).c
CTRLR_OBJS = $(CTRLR_C_FILES:.c=.o)

all: sim

sim: $(SIM_NODE)_sim $(SIM_PROG).epci
#	$(HEPTS) -mod $(SIM_MOD) -node $(SIM_NODE) -exec ./$(SIM_NODE)_sim

$(SIM_NODE)_sim: $(SIM_PROG)_c/_main.o $(HEPT_OBJS) #$(CTRLR_OBJS)
	$(CC) $(LDFLAGS) -o $(SIM_NODE)_sim $^

$(CONTRACT_PROG)_z3z/$(CONTRACT_NODE).z3z: $(CONTRACT_PROG).ept
	$(HEPTC) -target c -target z3z -s $(SIM_NODE) $(CONTRACT_PROG).ept

$(CONTRACT_PROG).epci \
$(CONTRACT_PROG)_c/$(CONTRACT_PROG).c \
$(CONTRACT_PROG)_c/_main.c: $(CONTRACT_PROG)_z3z/$(CONTRACT_NODE).z3z

%.epci: %.epi
	$(HEPTC) $<

$(CTRLR_PROG).ept: $(CONTRACT_PROG)_z3z/$(CONTRACT_NODE).z3z
#	$(SIGALI) < $(CONTRACT_PROG)_z3z/$(CONTRACT_NODE).z3z > /dev/null

$(CTRLR_PROG).epci $(CTRLR_PROG)_c/$(CTRLR_PROG).c: $(CTRLR_PROG).ept
#	$(HEPTC) -target c $(CTRLR_PROG).ept

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -fr $(HEPT_C_DIRS) $(HEPT_Z3Z_DIRS) $(HEPT_JAVA_DIRS)
	rm -f $(SIM_NODE)_sim main.*
	rm -f *.epci *.mls *.ml *.obc ./*~
	rm -f $(CTRLR_PROG).ept

# Dependences

$(HEPT_OBJS) $(SIM_PROG)_c/_main.o: $(CTRLR_C_FILES)
