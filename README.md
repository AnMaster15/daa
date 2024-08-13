
# Algorithm Solutions in C++

This repository contains implementations of various algorithmic problems and solutions using C++. Each solution is self-contained and demonstrates different algorithmic techniques and data structures.

## Table of Contents

1. [Huffman Coding](#huffman-coding)
2. [Job Scheduling Problem](#job-scheduling-problem)
3. [Fractional Knapsack Problem](#fractional-knapsack-problem)
4. [N Meetings in One Room Problem](#n-meetings-in-one-room-problem)
5. [Hamiltonian Cycle Problem](#hamiltonian-cycle-problem)
6. [Majority Element in Array](#majority-element-in-array)
7. [Travelling Salesman Problem](#travelling-salesman-problem)

## Huffman Coding

- **Description:** This implementation uses a greedy algorithm to generate Huffman codes for data compression.
- **Code:** [huffman_coding.cpp](huffmanCoding.cpp)
- **Input:** Frequencies of characters.
- **Output:** Huffman codes for each character.

## Job Scheduling Problem

- **Description:** This program schedules jobs to maximize profit with deadlines.
- **Code:** [job_scheduling.cpp](jobScheduling.cpp)
- **Input:** Array of jobs with deadlines and profits.
- **Output:** Sequence of jobs that maximizes total profit.

## Fractional Knapsack Problem

- **Description:** This implementation solves the fractional knapsack problem using a greedy approach.
- **Code:** [fractional_knapsack.cpp](fractionalKnapsack.cpp)
- **Input:** Array of items with values and weights.
- **Output:** Maximum profit that can be obtained.

## N Meetings in One Room Problem

- **Description:** Determines the maximum number of meetings that can be scheduled in one room without overlapping.
- **Code:** [n_meetings.cpp](nMeetingsInOneRoom.cpp)
- **Input:** Array of meetings with start and end times.
- **Output:** Number of non-overlapping meetings that can be scheduled.

## Hamiltonian Cycle Problem

- **Description:** Finds whether a Hamiltonian Cycle exists in a given graph.
- **Code:** [hamiltonian_cycle.cpp](hamiltonianCycle.cpp)
- **Input:** Adjacency matrix of the graph.
- **Output:** Hamiltonian Cycle, if it exists.

## Majority Element in Array

- **Description:** Finds the majority element in an array if it exists.
- **Code:** [majority_element.cpp](majorityElement.cpp)
- **Input:** Array of integers.
- **Output:** Majority element in the array or an indication that no majority element exists.

## Travelling Salesman Problem

- **Description:** Solves the Travelling Salesman Problem using dynamic programming.
- **Code:** [tsp.cpp](travellingSalesman.cpp.cpp)
- **Input:** Distance matrix of cities.
- **Output:** Minimum cost to visit all cities and return to the starting city.

## Getting Started

### Prerequisites

To compile and run these programs, you need:

- A C++ compiler such as GCC.
- Basic knowledge of C++ and algorithms.

### Compilation

To compile any of the provided programs, use the following command:

```sh
g++ -o program_name program_file.cpp
```

### Execution

After compilation, you can run the program using:

```sh
./program_name
```

Replace `program_name` with the appropriate name of the compiled program.

## Contributing

Contributions are welcome! Please feel free to submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
