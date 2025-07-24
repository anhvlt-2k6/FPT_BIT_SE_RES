#!/bin/bash

CLASSNAME=$1

if [ -z $1 ]; then
	echo -e -n "ERROR: Please enter classname in the first arg: "
	read CLASSNAME
fi

echo -e -n "DANH SANH LOP $CLASSNAME\n"

echo -e -n "Vui long nhap mot so: "
read n

while [[ $n -le 4 || $n -ge 11 ]]; do
	echo -e -n "Sai so n, vui long nhap lai: "
	read n
done

touch "thuong.txt"
echo -e -n "Tong so tien thuong la: $(expr $n \* 800000) dong" > "thuong.txt"
cat thuong.txt

