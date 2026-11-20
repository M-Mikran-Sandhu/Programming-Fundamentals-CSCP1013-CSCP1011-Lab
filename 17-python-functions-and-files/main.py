import os
FILE_NAME = "records.txt"



def add_student():
    name = input("Name (one word): ").strip()
    
    if len(name.split()) != 1:
        print("Name must be exactly one word. Student not saved.")
        return

    text = input("Marks (0 to 100): ").strip()
    if not text.isdecimal() or int(text) > 100:
        print("Marks must be a whole number from 0 to 100. Student not saved.")
        return

    
    try:
        file = open(FILE_NAME, "a")
    except OSError:
        print("Error: could not open", FILE_NAME, "for writing.")
        return

    file.write(name + " " + text + "\n")    
    file.close()
    print(name, "saved.")


def read_records():
    records = []
    if not os.path.exists(FILE_NAME):
        return records

    try:
        file = open(FILE_NAME, "r")
    except OSError:
        print("Error: could not open", FILE_NAME, "for reading.")
        return records

    for line in file:
        parts = line.split()
        
        if len(parts) == 2 and parts[1].isdecimal():
            records.append([parts[0], int(parts[1])])
    file.close()
    return records


def view_all():
    records = read_records()
    if len(records) == 0:
        print("No records yet. Add a student first.")
        return

    print()
    print("Name".ljust(12) + "Marks")     
    print("-----------------")
    for record in records:
        print(record[0].ljust(12) + str(record[1]))
    print("Total records:", len(records))



def search_student():
    target = input("Name to search: ").strip()
    records = read_records()

    found = False
    for record in records:
        if record[0].lower() == target.lower():
            print(record[0], "has", record[1], "marks.")
            found = True

    if not found:
        print(target, "was not found.")


def main():
    choice = ""
    while choice != "4":
        print()
        print("1. Add student")
        print("2. View all students")
        print("3. Search by name")
        print("4. Exit")
        choice = input("Choose (1 to 4): ").strip()

        if choice == "1":
            add_student()
        elif choice == "2":
            view_all()
        elif choice == "3":
            search_student()
        elif choice == "4":
            print("Goodbye.")
        else:
            print("Invalid choice. Enter a number from 1 to 4.")


main()