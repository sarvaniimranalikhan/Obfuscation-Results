# Obfuscation-Results

**PreRequisite:**

Python(3.4.0)

numpy(v_1.16.4)

scipy(V_1.3.0)

clang(v_6.0.0)

**Procedure:**

Clone the Repository using git or Download zip.You will have C/C++ normal souce Codes  in *Test Sample Codes* folder and their llvm files in *Test Sample_ll_files* .*Obfuscated Codes* folder contains the source codes after obfuscation, and their llvm files in *Obfuscated_ll_files*.

You Can Use Your own Sample codes and Obfuscate them using any Obfuscator tools (like Semantic design,Star Force etc..) then generate llvm files using Clang or CLang++.

Now Create your Own Binaries(.so files)  with specific Dimensions(like 200D,300D etc..) Using These binaries generate *Vectors* for the Normal codes and Obfuscated Codes by using their llvm files.

In the code Main.py change the Files paths to your Own generated Vector files and Run the Code.

Output file will be generated.
