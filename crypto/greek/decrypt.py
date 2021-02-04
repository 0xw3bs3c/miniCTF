# Polybius Cipher

nums = [54, 42, 61, 26, 26, 62, 42, 61, 36, 64, 56, 14, 54, 32, 66, 36, 56, 15, 13, 56]

def getVal(x):
  val = (x//10 - 1)*6 + (x%10)
  if (val <= 26):
    return chr(ord('a')+val-1)
  else:
    return chr(ord('0')+val-27)

for n in nums:
  print(getVal(n), end="")

print()
