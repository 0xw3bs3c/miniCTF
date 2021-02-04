import sys
from base64 import b32decode
import string

msg = "DAJQUGBENJWDYLLMFMADY3Z3NRVAA2ZNNQYSWABJNQWSMADKNQ6C23BLEI======"

enc = b32decode(msg).decode()

def xor(msg, key):
  output = ""
  for ch in msg:
    output += chr(ord(ch) ^ ord(key))

  return output


for c in string.printable:
  print(xor(enc, c))
