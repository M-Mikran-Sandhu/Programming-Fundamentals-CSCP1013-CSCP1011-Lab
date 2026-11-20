name = input("Enter your name: ")
text = input("Enter your marks (0 to 100): ").strip()


if not text.isdecimal():
    print("Invalid input. Enter a whole number from 0 to 100.")
else:
    marks = int(text)           

    if marks > 100:
        print("Invalid input. Marks cannot be more than 100.")
    else:
        if marks >= 80:
            grade = "A"
        elif marks >= 70:
            grade = "B"
        elif marks >= 60:
            grade = "C"
        elif marks >= 50:
            grade = "D"
        else:
            grade = "F"

        if marks >= 50:
            result = "Pass"
        else:
            result = "Fail"

        print()
        print("Name  :", name)
        print("Marks :", marks)
        print("Grade :", grade)
        print("Result:", result)