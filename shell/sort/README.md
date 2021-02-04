# Question

To take revenge from 0xk4rma I hide his password md5 hash password in hash wordlist which occurs only once. Once you get it submit GLUG{md5_decoded_hash}

ssh user@chall.ctf.nitdgplug.org -p 30006
Password: tux123

# Answer

```bash
awk '{!seen[$0]++};END{for(i in seen) if(seen[i]==1)print i}' mad.txt
sort | uniq
```
