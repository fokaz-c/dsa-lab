#include <iostream>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
  return front == -1 && rear == -1;
}

bool isFull() {
  return rear == MAX_SIZE - 1;
}

void enqueue(int value) {
  if (isFull()) {
    std::cout << "Queue is full. Cannot enqueue element." << std::endl;
    return;
  } else if (isEmpty()) {
    front = 0;
  }

  arr[++rear] = value;
}

void dequeue() {
  if (isEmpty()) {
    std::cout << "Queue is empty. Cannot dequeue element." << std::endl;
    return;
  } else if (front == rear) {
    front = rear = -1;
  } else {
    front++;
  }
}

int peek() {
  if (isEmpty()) {
    std::cout << "Queue is empty. Cannot peek element." << std::endl;
    return -1;
  }
  return arr[front];
}

void display() {
  if (isEmpty()) {
    std::cout << "Queue is empty." << std::endl;
    return;
  }

  std::cout << "Queue: ";
  for (int i = front; i <= rear; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int choice, value;

  while (true) {
    std::cout << "1. Enqueue  2. Dequeue  3. Peek  4. Display  5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        std::cout << "Enter the value to enqueue: ";
        std::cin >> value;
        enqueue(value);
        break;
      case 2:
        dequeue();
        break;
      case 3:
        std::cout << "Front element: " << peek() << std::endl;
        break;
      case 4:
        display();
        break;
      case 5:
        std::cout << "Exiting program." << std::endl;
        return 0;
      default:
        std::cout << "Invalid choice. Please enter a valid option." << std::endl;
    }
  }

  return 0;
}
