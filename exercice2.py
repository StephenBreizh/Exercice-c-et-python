a = int(input("a : "))  # on attribue à la variable a le fait que ce soit un entier et que l'on doit rentrer la valeur de a
b = int(input("b : "))  # on attribue à la variable b le fait que ce soit un entier et que l'on doit rentrer la valeur de b

print(f"a vaut {a} et b vaut {b}")  # on affiche la valeur de la variable a et b 

tmp = a  # on attribue notre variable a à la variable tmp
a = b  # on attribue notre variable b à la variable a
b = tmp  # on attribue notre variable tmp à la variable b

print(f"a vaut {a} et b vaut {b}")  # on affiche le resultat du swap des 2 variable