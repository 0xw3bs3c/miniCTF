# Question

:( may the currllll be with uu

https://dlug2.herokuapp.com/

# Answers
From the challenge name you get to know something related to JWT token on home page you get a hint only  POST request
when you go to /login you get to know how to pass data in json format So ,

curl -X POST https://dlug2.herokuapp.com/login -H 'content-type: application/json' --data '{"user":"error","pass":"error"}'

Once you get the token  go to https://jwt.io/

You will see the value

"user" : "guest
change that to  "user" : "admin

but after this  most of you tried to send POST request to /login

but don't forget to do basic checks and  when you go to  /robots.txt you  get /flag page.

On making a POST request to /flag we get something like this gimme token and I will give you the flag

So use the forged token ("user" : "admin)

curl -X POST https://dlug2.herokuapp.com/flag -H 'content-type: application/json' --data '{"token":""}'
