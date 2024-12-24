def calculate_percentage(obtained_marks, total_marks):
    percentage = (obtained_marks / total_marks) * 100
    return percentage

total_marks = float(input("Enter the total marks: "))
obtained_marks = float(input("Enter the obtained marks: "))

percentage = calculate_percentage(obtained_marks, total_marks)

print(f"Percentage: {percentage:.2f}%")

