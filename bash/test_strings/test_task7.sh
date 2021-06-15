#!/bin/bash
CC=gcc
EXEC=task7
SRC=task7.c
if [ "$SRC" -nt "$EXEC" ]
then
        echo "Rebuilding $EXEC..."
        $CC $SRC -o $EXEC
fi
input=".test_cases.txt"
COUNTER=1
check_output(){
    if[ "$READ" -ne "0" ]
    then
        echo -e "\nTest $COUNTER failed, exit status: $READ\n"
    else
        echo -e "\nTest $COUNTER passed\n"
    fi
while IFS=read -r line
    do
        ./$EXEC $line
        READ=$?
        check_output $COUTER
        (( COUNTER++ ))
    done < "$input"
