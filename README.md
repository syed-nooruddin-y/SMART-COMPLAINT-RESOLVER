# SMART-COMPLAINT-RESOLVER

Chapter 1 – Introduction
1.1 Background

In modern cities, civic issues such as traffic congestion, water supply disruptions, power outages, and drainage problems are common concerns reported by citizens daily.
Municipal authorities require an efficient and structured system to record, track, and resolve these complaints effectively.

Manual complaint management is time-consuming and error-prone, often leading to delays in response and lack of updates to citizens.
A software-based solution can automate complaint tracking, dynamically maintain complaint records, and provide instant resolution updates — even within a small-scale simulation using programming concepts.

The Smart Complaint Resolver aims to demonstrate how a structured C program can simulate such a real-world complaint management system through the use of linked lists, dynamic memory allocation, and string handling.


1.2 Problem Statement

Currently, there is no simple and lightweight system capable of dynamically handling user complaints, managing them efficiently through data structures, and automatically marking them as resolved.

The main challenges include:

Efficiently storing an unknown number of complaints.

Allowing easy addition, retrieval, and modification of complaint entries.

Ensuring complaints can be updated or marked as resolved without altering or corrupting existing data.

Maintaining data integrity, especially for strings that contain keywords like “at” or “water”.

Hence, the project focuses on building a C-based complaint management simulation that can dynamically handle data, ensure integrity, and provide automated resolution.


1.3 Objectives

The objectives of this project are as follows:

 Develop a C-based program to store and manage complaints dynamically.

 Implement linked lists to handle an unknown number of complaints efficiently.

 Ensure that string operations are handled safely without affecting word integrity.

 Automatically mark complaints as resolved once processed.

 Provide an interactive interface that allows easy input and display of complaints before and after resolution.

 

 Chapter 2 – Methodology

The methodology explains the process used to design and implement the system to meet all project objectives.

Step 1: Input Handling

The program begins by prompting the user to enter the total number of complaints.

Each complaint is entered using dynamic input (fgets()), which allows complete line entries — including spaces and special characters.

The complaints are stored dynamically using a linked list, where each node represents one complaint.

This approach ensures flexibility and supports unlimited complaint entries based on memory availability.


Step 2: Data Structure Design
Linked List

Each node in the linked list represents a single complaint.

It contains:

A text field (complaint description).

A pointer to the next node.

This allows the system to handle any number of complaints dynamically without predefined limits.

Dynamic Memory Allocation

The program uses malloc() to allocate memory for each complaint node at runtime.

This ensures efficient memory utilization since space is allocated only when needed.

It also allows scalability — users can continue adding complaints without modifying the source code.


Step 3: Display Complaints

Once the complaints are entered, the program traverses the linked list to display them sequentially.

This provides an overview of all current or pending issues before any resolution is applied.


Step 4: Complaint Resolution

The program automatically updates each complaint to indicate its resolved status by appending the keyword “resolved” at the end of each complaint text.

This process ensures:

The original text remains intact.

Words such as “at” or “water” within complaints are not altered.

Each entry is processed uniformly for clarity.

This stage simulates the automatic marking of resolved complaints in real complaint-tracking systems.


Step 5: Final Output

After marking all complaints as resolved, the system traverses the linked list again to display the updated complaint list.

The output clearly differentiates between the pending and resolved states of each complaint.

This step demonstrates how the system maintains data integrity while dynamically updating information in memory.


Step 6: Advantages of the Methodology

The Smart Complaint Resolver incorporates several strengths through its structured design:

Scalable: Capable of handling any number of complaints dynamically using linked lists.

Efficient: Memory is allocated only when needed; no shifting of data occurs during insertion or deletion.

Safe: Proper string operations maintain the integrity of each complaint text.

Interactive: Provides clear user interaction and immediate display of complaint resolution results.

Educational: Demonstrates practical use of C programming fundamentals such as linked lists, dynamic memory allocation, and string handling.


Chapter 3 – Results and Discussion

The Smart Complaint Resolver successfully demonstrates how structured programming in C can solve real-world problems like complaint management.
It efficiently handles complaint entry, display, and resolution through a well-defined data structure and logical workflow.

Key Outcomes:

Dynamic complaint handling using linked lists.

Automated complaint resolution without altering original content.

Data integrity maintained even with dynamic input and modification.

Real-time interaction between user input and system output.

Concepts Highlighted:

Linked lists for flexible data management.

Dynamic memory allocation for runtime efficiency.

Safe string manipulation for text-based data.

Modular programming for code clarity and reusability.


Chapter 4 – Conclusion

The Smart Complaint Resolver effectively simulates a real-world complaint management system using fundamental C programming concepts.
It showcases how linked lists and dynamic memory allocation can be used to manage unpredictable data volumes efficiently.

This project demonstrates:

The practical application of data structures for real-world use cases.

The role of dynamic memory management in scalable program design.

The importance of structured programming for maintaining data accuracy and readability.

By implementing complaint resolution through linked lists, the project bridges theory and practice, offering a foundational understanding of how programming logic can address civic and administrative challenges.


 Future Enhancements

Integration of file handling for saving and loading complaint records.

Addition of priority levels (high, medium, low) for better categorization.

Implementation of a timestamp feature to record complaint submission time.

Expansion into an admin-user model for complaint assignment and tracking.

Integration with graphical or web-based interfaces for better visualization.



Author

Syed-Nooruddin Y
C Programmer | Cybersecurity & Coding Enthusiast

📜 License

Licensed under the MIT License — free to use, modify, and share for educational and learning purposes.
