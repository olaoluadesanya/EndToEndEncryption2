# EndToEndEncryption2
I am writing an end to end encryption code as a practice for C++ object oriented concepts and my flair for encryption

The first bite is an exercise from deitel's how to program book. The problem states:

"A company that wants to send data over the Internet has asked you to write a program that will encrypt 
it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. 
Your application should read a four-digit integer entered by the user and encrypt it as follows: 
Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10. 
Then swap the first digit with the third, and swap the second digit with the fourth. Then print the encrypted integer.
Write a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the
encryption scheme) to form the original number."

Of course only an header file "Encryption.h" and the object code "Encryption.o" will be provided to an end user. 
This enforces hiding the actual encryption strategy in "Encryption.cpp".

The simplicity of the code in "Encryption.cpp" was intended assuming only knowledge of only basic integer arithmetic,
selection statements, and repitition statements.

Improvements would be made incorporating data structures and eventually the RSA scheme.
