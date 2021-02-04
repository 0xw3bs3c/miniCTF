#! /usr/bin/python3

import sys
from base64 import b32encode

if len(sys.argv) != 3:
    print("You have entered wrong no. of Arguments")
    print("Usage: python3 encrypt.py X message")
    print("where X is a single character")
    sys.exit()

key = sys.argv[1]
msg = sys.argv[2]

if len(key) != 1:
    print("Key must contain only one character")
    sys.exit()

output = ""

for ch in msg:
    output += chr(ord(ch) ^ ord(key))

print(b32encode(output.encode()).decode())
