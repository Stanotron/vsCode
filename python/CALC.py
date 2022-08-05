def add(a, b):
    return a+b


def sub(a, b):
    return a-b


def mult(a, b):
    return a*b


def div(a, b):
    return a/b


def main():
    val1 = float(input("enter val 1: "))
    while True:
        operat = input("Enter operation: ")
        if operat == "end":
            print(f"Final Value = {tot}")
            break
        val2 = float(input("enter val 2: "))
        if operat == "+":
            tot = add(val1, val2)
        elif operat == "-":
            tot = sub(val1, val2)

        elif operat == "*":
            tot = mult(val1, val2)

        elif operat == "/":
            tot = div(val1, val2)

        print(tot)
        val1 = tot


main()
