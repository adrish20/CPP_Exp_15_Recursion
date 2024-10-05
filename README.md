<h1>Aim</h1>
<p>To study and implement C++ recursion</p>
<hr>
<h1>Software required</h1>
<p>Vscode</p>
<hr>
<h1>Theory</h1>
<p>Recursion in C++ is a programming technique where a function calls itself to solve a problem by breaking it down into simpler subproblems. It consists of two main components: a base case, which provides a simple solution to a specific input and prevents infinite recursion, and a recursive case, where the function calls itself with modified arguments to gradually approach the base case. Recursion is particularly useful for tasks such as traversing data structures (like trees), calculating mathematical sequences (such as factorials or Fibonacci numbers), and implementing algorithms (like quicksort and mergesort). However, it is crucial to ensure that recursive calls eventually lead to the base case to avoid stack overflow from excessive function calls.</p>
<hr>
<h1>Algorithms</h1>
<h2>Sum of integers upto a number</h2>
<ol>
        <li>Start.</li>
        <li>Define a function <strong>sum(int x)</strong>:
            <ul>
                <li>If <strong>x</strong> is equal to 1:
                    <ul>
                        <li>Return 1.</li>
                    </ul>
                </li>
                <li>Else:
                    <ul>
                        <li>Return <strong>x</strong> + <strong>sum(x-1)</strong>.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function:
            <ul>
                <li>Declare integer variables <strong>num</strong> and <strong>ssum</strong>.</li>
                <li>Print the message <strong>"Enter a number: "</strong> to the console.</li>
                <li>Read an integer input from the user into <strong>num</strong>.</li>
                <li>Call the <strong>sum(num)</strong> function and assign the result to <strong>ssum</strong>.</li>
                <li>Print the sum by displaying <strong>"Sum is: "</strong> followed by the value of <strong>ssum</strong>.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<h2>Factorial of a number</h2>
<ol>
        <li>Start.</li>
        <li>Define a function <strong>factorial(int x)</strong>:
            <ul>
                <li>If <strong>x</strong> is less than or equal to 1:
                    <ul>
                        <li>Return 1.</li>
                    </ul>
                </li>
                <li>Else:
                    <ul>
                        <li>Return <strong>x</strong> * <strong>factorial(x-1)</strong>.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function:
            <ul>
                <li>Declare integer variables <strong>num</strong> and <strong>ans</strong>.</li>
                <li>Print the message <strong>"enter a number: "</strong> to the console.</li>
                <li>Read an integer input from the user into <strong>num</strong>.</li>
                <li>Call the <strong>factorial(num)</strong> function and assign the result to <strong>ans</strong>.</li>
                <li>Print the factorial by displaying <strong>"factorial is: "</strong> followed by the value of <strong>ans</strong>.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<h2>Reversing a number</h2>
<ol>
        <li>Start.</li>
        <li>Define a function <strong>rev_num(int x)</strong>:
            <ul>
                <li>If <strong>x</strong> is greater than 0:
                    <ul>
                        <li>Print <strong>x % 10</strong> (the last digit of x).</li>
                        <li>Call <strong>rev_num(x / 10)</strong> to process the remaining digits.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function:
            <ul>
                <li>Declare an integer variable <strong>num</strong>.</li>
                <li>Print the message <strong>"Enter a number: "</strong> to the console.</li>
                <li>Read an integer input from the user into <strong>num</strong>.</li>
                <li>Call the <strong>rev_num(num)</strong> function to display the reversed number.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<h2>Reversing a string</h2>
<ol>
        <li>Start.</li>
        <li>Define a function <strong>rev_str(char *str)</strong>:
            <ul>
                <li>If the character pointed to by <strong>str</strong> is not <strong>'\0'</strong>:
                    <ul>
                        <li>Call <strong>rev_str(str + 1)</strong> to process the next character in the string.</li>
                        <li>Print the character pointed to by <strong>str</strong>.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function:
            <ul>
                <li>Declare a character array <strong>str</strong> of size 20.</li>
                <li>Print the message <strong>"Enter a word: "</strong> to the console.</li>
                <li>Read a word input from the user into <strong>str</strong>.</li>
                <li>Call the <strong>rev_str(str)</strong> function to display the reversed string.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<hr>
<h1>Conclusion</h1>
<p>In conclusion, through this experiment we have learnt how to implement recurssion in different C++ codes.</p>
    
