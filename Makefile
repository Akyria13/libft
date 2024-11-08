NAME = libft.a

HEADER = libft.h

SRC = # Tous les .c

SRC_BONUS =  # Tous les .c bonus

INC_DIR = .

OBJ = $(SRC:%.c=$(OBJ_DIR:%.o))

OBJ_BONUS = $(SRC_BONUS:%.c=$(OBJ_DIR:%.o))

