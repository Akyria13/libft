NAME = libft.a
HEAD = libft.h

#OBJ_DIR = obj/

CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

AR = ar rcs
RM = rm -f

SRC = \
					ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_substr.c \
					ft_strjoin.c
SRC_BONUS =  # All .c bonus

OBJS = $(SRC:%.c=$(OBJ_DIR)%.o)
OBJS_BONUS = $(SRC_BONUS:%.c=$(OBJ_DIR)%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $(OBJS)

#$(OBJ_DIR)%.o: %.c $(HEAD) | $(OBJ_DIR)
#	$(CC) $(CFLAGS) -c $< -o $@
%.o: %.c
	$(CC) -I. -o $@ -c $? $(CFLAGS)

#$(OBJ_DIR) :
#	mkdir -p $(OBJ_DIR)

bonus: $(OBJS) $(OBJS_BONUS)
	@$(AR) $(NAME) $^

clean :
	$(RM) -f $(OBJS)
#$(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
