enc = "474c55477b683378632137316e395f31356e27745f21373f7d"
flag = ''.join([ chr(int(enc[i:i+2], 16)) for i in range(0, len(enc), 2) ])
print(flag)
