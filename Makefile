NAME = push_swap

SRCS_MAIN = push_swap.c

SRCS =	srcs/swap.c				\
		srcs/push.c				\
		srcs/rotate.c			\
		srcs/reverse_rotate.c	\
		srcs/five_numbers.c		\
		srcs/five_numbers2.c	\
		srcs/hundred_nums.c		\
		srcs/hundred_nums2.c	\
		srcs/error_checker.c

OBJS = $(SRCS:.c=.o)
OBJS_MAIN = $(SRCS_MAIN:.c=.o)
CC = clang
CCFLAGS = -Wall -Werror -Wextra
RM = rm -rf
PRINTF_PATH = ./ft_printf
LIBFT_PATH = ./libft

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS_MAIN) $(OBJS)
	$(MAKE) -C $(PRINTF_PATH)
	mv ./ft_printf/libftprintf.a .
	$(MAKE) -C $(LIBFT_PATH)
	mv ./libft/libft.a .
	$(CC) $(CCFLAGS) $(OBJS_MAIN) $(OBJS) -L . -lftprintf -lft -o $(NAME)

all: $(NAME)

clean:
	$(MAKE) -C $(PRINTF_PATH) clean
	$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)
	$(RM) $(OBJS_MAIN)

fclean: clean
	$(RM) $(NAME)
	$(RM) libftprintf.a
	$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re
