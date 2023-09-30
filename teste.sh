#!/bin/bash
argumento1=$1
echo "TESTE"

if [ "$argumento1" == 'juju' ]; then
	echo -e "\n\nmanda pix, quero uma coca\n"
elif [ $argumento1 == 'manga' ]; then
	echo "AAAAAINNN ZE DA MANGA"
else
	echo "sem pix :((("
fi
