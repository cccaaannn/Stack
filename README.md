## Stack
----

![GitHub top language](https://img.shields.io/github/languages/top/cccaaannn/Stack?style=flat-square) ![](https://img.shields.io/github/repo-size/cccaaannn/Stack?style=flat-square) [![GitHub license](https://img.shields.io/github/license/cccaaannn/Stack?style=flat-square)](https://github.com/cccaaannn/Stack/blob/master/LICENSE)

### C++ Stack

<br/>
 
```c++
Stack<int> stack;

stack.push(10);
stack.push(20);
stack.push(30);
stack.push(40);
stack.push(50);
stack.push(60);
stack.push(70);

stack.pop();
stack.pop();

std::cout << stack << std::endl;

stack.printStackCustom(" -> ", "\n", "{", "}"); 
```

output
```
[50,40,30,20,10]
{50 -> 40 -> 30 -> 20 -> 10}
```

<br/>


```c++
Stack<std::string> stack;

stack.push("Stack");
stack.push("From");
stack.push("!");
stack.push("World");    
stack.push(" ");
stack.push("Hello");

std::cout << stack << " size: " << stack.size() << std::endl << std::endl;
```

output
```
[Hello, ,World,!,From,Stack] size: 6 
```

