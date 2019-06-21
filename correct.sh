#!/bin/sh

for i in 00 01 02 03 04 05 06 07 08 09 10 11 12
do
	echo "ex$i"
	ls -lRA eval/ex$i
	cp -R eval/ex$i/* ex$i/
	norminette -R CheckForbiddenSourceHeader eval/ex$i/*.c eval/ex$i/*.h
	gcc -Wall -Wextra -Werror -o ex$i/output ex$i/*.c
	cat eval/ex$i/*
	read a
	if [ -f "./ex$i/run.sh" ]; then
		./ex$i/run.sh
	else
		./ex$i/output
	fi
	read a
done
