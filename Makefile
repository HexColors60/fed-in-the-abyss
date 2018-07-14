##
## makefile fed in the abyss
## rudreais
##
##

CFLAGS		+=		-I include -Wall -Wextra -W -g3

LDFLAGS	+=		-lncurses

DIRLIB		+=		./lib/

DIRSRC		+=		./src/


SRC		+=		$(DIRLIB)paths.c			\
					$(DIRLIB)readline.c		\
					$(DIRLIB)objects/*.c		\
					$(DIRSRC)core/files.c		\
					$(DIRSRC)core/parse_map.c	\
					$(DIRSRC)core/gen_map.c	\
					$(DIRSRC)main.c

OBJ		=		$(SRC:.c=.o)

EXEC		=		fita

all:				$(EXEC)

$(EXEC):			$(OBJ)
					$(CC) -o $(EXEC) $(OBJ) $(LDFLAGS) $(CFLAGS)
					make clean
					mv $(EXEC) bin/

clean:
					rm -f $(OBJ)

fclean:			clean
					rm -f $(EXEC)

re:				clean all