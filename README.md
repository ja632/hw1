# HW1 **簡介**

## 題目
Given the input 22, the following sequence of numbers will be printed: 
	``22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1``
Write a C++ program to read in an integer and print out the corresponding sequence of numbers. You do not need to worry about the overflow problem

## 編譯程式
### 1.1使用c++編譯器編譯程式
- 以下是使用g++的方法
在terminal上打下面這個指令
``g++ -o main main.cpp``
就會生成一個``main.exe``檔，只要在terminal上去執行這個exe檔，就可以成功去使用這個程式了。
- 運行程式
``./main.exe``
### 1.2使用Makefile
- Makefile可以可以將要在g++編譯器上打的指令進行打包，這樣可以減少每一次在terminal輸入指令的次數，也可以避免多次輸入打錯的風險。
- Makefile code
```
main: main.o
	g++ -o main main.o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm main *.o ```

## 1.3執行程式

- 程式會叫你輸入一個n值，而使用者只要輸入22就可以得到``22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1``這個結果。
