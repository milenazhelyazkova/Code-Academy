#!/bin/bash
CC=gcc
EXEC=task7
SRC=task7.c
if [ "$SRC" -nt "$EXEC" ]
then
    echo "Rebuilding $EXEC..."
    $CC $SRC -o $EXEC
fi
input="./test_cases.txt"
COUNTER=1
check_output () {
    if [ "$READ" -ne "0" ]
    then
        if [ "$READ" -eq "1" ]
        then
            READ="1 Two agruments needed"
        elif [ "$READ" -eq "2" ]
        then
            READ="2 Wrong agrument format"
        fi
        echo -e "\nTest $COUNTER failed,argument were $line exit status: $READ\n"
    else
        echo -e "\nTest $COUNTER passed\n"
    fi
}
while IFS= read -r line
    do
        ./$EXEC $line
        READ=$?
        check_output $COUTER
        (( COUNTER++ ))
    done < "$input"
