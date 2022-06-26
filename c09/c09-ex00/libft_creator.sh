rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
dpkg x libft.a *.o
find . -name "*.o" -type f -delete
