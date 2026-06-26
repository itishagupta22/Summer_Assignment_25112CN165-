import requests
import random
import html

score = 0

url = "https://opentdb.com/api.php?amount=10&category=18&difficulty=easy&type=multiple"

response = requests.get(url)

data = response.json()

for question_no in range(10):

    question = html.unescape(data["results"][question_no]["question"])

    correct = html.unescape(data["results"][question_no]["correct_answer"])

    wrong = []

    for answer in data["results"][question_no]["incorrect_answers"]:
        wrong.append(html.unescape(answer))

    options = wrong + [correct]

    random.shuffle(options)

    print("\nQuestion", question_no + 1)
    print(question)
    print()

    for i in range(4):
        print(i + 1, ".", options[i])

    while True:
        try:
            choice = int(input("\nEnter your choice (1-4): "))

            if 1 <= choice <= 4:
                break
            else:
                print("Please enter a number between 1 and 4.")

        except ValueError:
            print("Please enter numbers only.")

    if options[choice - 1] == correct:
        print(" Correct!")
        score += 1
    else:
        print(" Wrong!")
        print("Correct Answer:", correct)

print("\nQuiz Finished")
print("Your Score =", score, "/10")

if score == 10:
    print("Outstanding!")
elif score >= 8:
    print("Excellent!")
elif score >= 6:
    print("Good Job!")
elif score >= 4:
    print("Keep Practicing!")
else:
    print("Better Luck Next Time!")