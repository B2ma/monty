The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
		
		TASKS

0. Implement the push and pall opcodes.The opcode push pushes an element to the stack.The opcode pall prints all the values on the stack, starting from the top of the stack.
1. Implement the pint opcode.The opcode pint prints the value at the top of the stack, followed by a new line.
2. Implement the pop opcode.The opcode pop removes the top element of the stack.
3. Implement the swap opcode.The opcode swap swaps the top two elements of the stack.
4. Implement the add opcode.The opcode add adds the top two elements of the stack.
5. Implement the nop opcode.The opcode nop doesn’t do anything.
6. Implement the sub opcode.The opcode sub subtracts the top element of the stack from the second top element of the stack.
7. Implement the div opcode.The opcode div divides the second top element of the stack by the top element of the stack.
8. Implement the mul opcode.The opcode mul multiplies the second top element of the stack with the top element of the stack.
9. Implement the mod opcode.The opcode mod computes the rest of the division of the second top element of the stack by the top element of the stack.
10. Every good language comes with the capability of commenting. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).
11. Implement the pchar opcode.The opcode pchar prints the char at the top of the stack, followed by a new line.
12. Implement the pstr opcode.The opcode pstr prints the string starting at the top of the stack, followed by a new line.
13. Implement the rotl opcode.The opcode rotl rotates the stack to the top.
14. Implement the rotr opcode.The opcode rotr rotates the stack to the bottom.
15. Implement the stack and queue opcodes.The opcode stack sets the format of the data to a stack (LIFO). This is the default behavior of the program.The opcode queue sets the format of the data to a queue (FIFO).
16. Write a Brainf*ck script that prints School, followed by a new line.
17. Add two digits given by the user.Read the two digits from stdin, add them, and print the result.The total of the two digits with be one digit-long (<10).
18. Multiply two digits given by the user.Read the two digits from stdin, multiply them, and print the result.
19. Multiply two digits given by the user.Read the two digits from stdin, multiply them, and print the result, followed by a new line.
