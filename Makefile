# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdieumeg <tdieumeg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 16:00:53 by tdieumeg          #+#    #+#              #
#    Updated: 2015/12/02 14:57:47 by tdieumeg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= /usr/bin/clang
RM		= /bin/rm
MKDIR	= /bin/mkdir

CFLAGS	= -Wall -Wextra -Werror

COLLEEN	= Colleen
GRACE	= Grace
SULLY	= Sully

COLSRC	= Colleen.c
GRASRC	= Grace.c
GKIDSRC	= Grace_kid.c
SULSRC	= Sully.c

ROOT	= $(shell pwd)
SULLYDIR= $(ROOT)/Sully

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN):
	@$(CC) $(CFLAGS) $(COLSRC) -o $@

$(GRACE):
	@$(CC) $(CFLAGS) $(GRASRC) -o $@

$(SULLY): $(SULLYDIR)
	@$(CC) $(CFLAGS) $(SULSRC) -o $(SULLYDIR)/$@

$(SULLYDIR):
	@$(MKDIR) $@

clean:
	$(RM) -rf $(COLLEEN) $(GRACE) $(GKIDSRC) $(SULLYDIR)

re: clean all
