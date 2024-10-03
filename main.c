#include <stdio.h>

int main() {
    // Define the questions and answers arrays
    char questions[5][100] = {
        "What is the capital of France?",
        "What is the largest planet in our solar system?",
        "What is the smallest country in the world?",
        "What is the largest living species of lizard?",
        "What is the highest mountain peak in the world?"
    };

    char answers[5][100] = {
        "Paris",
        "Jupiter",
        "Vatican City",
        "Komodo dragon",
        "Mount Everest"
    };

    int score = 0;

    // Loop through the questions
    for (int i = 0; i < 5; i++) {
        printf("%s\n", questions[i]);
        char user_answer[100];
        scanf("%s", user_answer);

        // Check if the user's answer is correct
        if (strcmp(user_answer, answers[i]) == 0) {
            score++;
            printf("Correct!\n");
        } else {
            printf("Incorrect. The correct answer is %s.\n", answers[i]);
        }
    }

    // Display the final score
    printf("Your final score is %d out of 5.\n", score);

    return 0;
}