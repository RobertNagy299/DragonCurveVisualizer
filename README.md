<h1>C - Dragon curve visualizer (NOT MEMORY SAFE)</h1>

 ### [YouTube Demonstration](https://youtu.be/6kDIZj0qqyE)



<h2>Description</h2>
The project consists of a simple C program that uses the paint.h and gfx.h header files provided by my university and my personal implementation of linked lists. The program starts drawing the dragon fractal on the terminal. The number of iterations can be changed in the source code.
<br />


<h2>Languages and Utilities Used</h2>

- <b>C</b> 
- <b>paint.h file</b>
- <b>paint.c file</b>
- <b>gfx.h file</b>
- <b>gfx.c file</b>

<h2>Environments Used </h2>

- <b>Debian 12 (Linux)</b>
- <b>Visual Studio Code</b>
- <b>Oracle VM Virtualbox</b>

<h2>Program walk-through:</h2>

<p align="left">
Open the folder in Visual Studio Code (make sure that all of the files are in the same folder), open a new terminal, and enter the following command to compile the code:<pre>gcc fractal.c paint.c gfx.c -lX11 -lm -o program -Wall </pre> 
<b>Note</b>: "program" is just an arbitrary name I chose for the compiled file, you can change it to whatever you want it to be. Just make sure that when you run the code using ./program, you run it with your own file name instead, like this: ./yourfilename<br><br>
<img src="https://i.imgur.com/04KZCnd.png" height="80%" width="80%" alt="Linux command to compile fractal.c"/>
<br />
<br />
Final picture after 10 minutes of runtime with size = 4  <br/>
<img src="https://i.imgur.com/zJlwhLy.png"  alt="Final picture of the dragon fractal" height="100%" width="100%" />
<br />
<br />

Valgrind error messages: <br/> <br>
<img src="https://i.imgur.com/cqioXzG.png" height="80%" width="80%" alt="Valgrind error messages on the terminal screen"/>
<br />
<br />


<h2>Conclusion and final comments</h2>

I am rather disappointed by the fact that my code is so inefficient and unsafe. However, it is worth nothing that this project was more of a proof-of-concept, a challenge by an older student. 

Possible issues / ideas for improvement: Perhaps I should change the function return types to 'void', and use a node_t** type as an argument, in order to avoid unneccessarily copying nodes in the memory. I also fail to free the allocated memory at a number of instances.
<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
