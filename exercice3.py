a = int(input("a : "))  # on attribue à la variable a le fait que ce soit un entier et que l'on doit rentrer la valeur de a
b = int(input("b : "))  # on attribue à la variable b le fait que ce soit un entier et que l'on doit rentrer la valeur de b
c = int(input("c : "))  # on attribue à la variable c le fait que ce soit un entier et que l'on doit rentrer la valeur de c

if a < b and b < c:  # si la variable a est spérieur à la variable b et que la variable b est supérieur à la variable c
    print(f"la valeur la plus haute est {c}")  # on affiche la variable c

if b < c and c < a:  # si la variable b est spérieur à la variable c et que la variable c est supérieur à la variable a
    print(f"la valeur la plus haute est {a}")  # on affiche la variable a

if c < a and a < b:  # si la variable a est spérieur à la variable b et que la variable b est supérieur à la variable c
    print(f"la vaur la plus haute est {b}")  # on affiche la variable b

