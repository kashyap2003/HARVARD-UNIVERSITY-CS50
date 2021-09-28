from cs50 import get_string

people = {
        "kashyap": "7030374909",
        "vinay": "9422909246"
}

name = get_string("Name: ")
if name in people:
    print(f"Number: {people[name]}")