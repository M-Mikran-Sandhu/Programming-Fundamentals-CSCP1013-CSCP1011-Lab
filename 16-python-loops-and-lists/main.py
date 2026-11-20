COUNT = 5
marks_list = []                

for i in range(COUNT):
        while True:
            text = input("Enter marks of student " + str(i + 1) + " (0 to 100): ").strip()
        if text.isdecimal() and int(text) <= 100:
            break              
        print("Invalid input. Enter a whole number from 0 to 100.")

marks_list.append(int(text))    

print()
for i in range(COUNT):
    print("Student", i + 1, ":", marks_list[i])


total = 0
highest = marks_list[0]
lowest = marks_list[0]
passed = 0

for marks in marks_list:
    total = total + marks
    if marks > highest:
        highest = marks
    if marks < lowest:
        lowest = marks
    if marks >= 50:
        passed = passed + 1

average = total / COUNT

print()
print("Total  :", total)
print("Average:", round(average, 2))
print("Highest:", highest)
print("Lowest :", lowest)
print("Passed :", passed, "out of", COUNT)