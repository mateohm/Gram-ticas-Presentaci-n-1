def acepta_G1(cadena):
    return cadena == cadena[::-1]

def acepta_G2(cadena):
    n = cadena.count("a")
    m = cadena.count("b")
    return cadena == "a"*n + "b"*(n+1)

def acepta_G3(cadena):
    n = cadena.count("a")
    m = cadena.count("b")
    return n > 0 and cadena == "a"*n + "b"*(n+1)

def acepta_G4(cadena):
    return cadena in ["abb", "ab"]

def acepta_G5(cadena):
    if not (cadena.startswith("a") and cadena.endswith("b")):
        return False
    middle = cadena[1:-1]
    return middle == "" or all(middle[i:i+2] == "ab" for i in range(0,len(middle),2))

def procesar(gramatica, archivo):
    try:
        with open(archivo, "r") as f:
            for linea in f:
                cadena = linea.strip()
                if not cadena: continue
                if gramatica(cadena):
                    print(f"{cadena} -> ACEPTA")
                else:
                    print(f"{cadena} -> NO ACEPTA")
    except FileNotFoundError:
        print(f"No se encontró el archivo {archivo}")

if __name__ == "__main__":
    print("Selecciona la gramática:")
    print("1. G1")
    print("2. G2")
    print("3. G3")
    print("4. G4")
    print("5. G5")

    opcion = input("Ingresa el número de la gramática: ")
    archivo = input("Ingresa el nombre del archivo .txt: ")

    gramaticas = {
        "1": acepta_G1,
        "2": acepta_G2,
        "3": acepta_G3,
        "4": acepta_G4,
        "5": acepta_G5,
    }

    if opcion in gramaticas:
        procesar(gramaticas[opcion], archivo)
    else:
        print("Opción no válida")
