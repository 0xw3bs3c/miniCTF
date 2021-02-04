# Question

Masao got lost in the jungle and has the flag that will guide them home. Help Shinchan and his friends find him.

ssh user@chall.ctf.nitdgplug.org -p 30008
Password: tux123

# Answer

`find . -type f | xargs -I {} cat {} | grep GLUG`

FLAG: GLUG{7h3_f1l3_expl0r3r}
