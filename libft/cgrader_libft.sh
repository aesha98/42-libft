#!/bin/bash
mkdir test
WORKDIR=$PWD/test
echo -e "\033[36mDownloading test files..\033[0m"
curl -s -S "https://raw.githubusercontent.com/hanshazairi/42-cgrader/master/libft/{main.c,test_makefile_output,test_output}" -o $WORKDIR/#1
echo -e "\033[36mGrading \033[33mlibft\033[36m..\033[0m"
make re > $WORKDIR/user_makefile_output
mv $WORKDIR/main.c .
gcc -c -Wall -Wextra -Werror main.c
gcc -o main main.o -L. -lft
./main > $WORKDIR/user_output
mv main* $WORKDIR
make fclean >> $WORKDIR/user_makefile_output
echo -en "\033[33mMakefile: \033[0m"
cmp -s $WORKDIR/user_makefile_output $WORKDIR/test_makefile_output && echo -e "\033[32mOK\033[0m" || echo -e "\033[31mKO\033[0m"
echo -en "\033[33mOutput: \033[0m"
cmp -s $WORKDIR/user_output $WORKDIR/test_output && echo -e "\033[32mOK\033[0m" || echo -e "\033[31mKO\033[0m"
norminette -R CheckForbiddenSourceHeader *.c *.h | grep Error > $WORKDIR/norminette_output
echo -en "\033[33mNorme: \033[0m"
[[ ! -s $WORKDIR/norminette_output ]] && echo -e "\033[32mOK\033[0m" || echo -e "\033[31mKO\033[0m"
[[ ! -z $1 ]] && [[ $1 == keep ]] && echo -e "\033[36mKeeping test files in \033[33m$WORKDIR/\033[36m..\033[0m" || rm -rf test
