#!/bin/bash

count=$1
len=$2

password() {
	tr -dc "A-Za-z0-9" < /dev/urandom | head -c $1
	echo
}

for ((i = 0; i < count; i++)); do
	password $2
done
