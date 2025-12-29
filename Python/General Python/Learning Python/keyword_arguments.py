# keyword arguments ---> An argument preceded by an identifier helps with readability.
#                        Order of arguments doesn't matter
#                        1.positional 2. Default 3. Keywords 4. Arbitrary


def hello (greeting , title , first, last) :
   print(f"{greeting} {title} {first} { last}")


hello("Hello","Mr",'Jatin', "Patil")
hello("Hello ",first="Pranav",title="Mr",last="Undirkalle")
