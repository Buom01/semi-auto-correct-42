#!/bin/sh

for i in 00 01 02 03 04 05 06 07 08 09 10
do
	echo "ex$i"
	ls -lRA eval/ex$i
	cp -R eval/ex$i/* ex$i/
	norminette -R CheckForbiddenSourceHeader eval/ex$i/*
	gcc -Wall -Wextra -Werror -o output ex$i/*
	cat eval/ex$i/*
	read a
	./ex$i/output
	read a
end

