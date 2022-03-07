# Pipe - processo pai e processo filho

## Atividade: Infraestrutura de Software
Aluno: João Pedro Cordeiro Abrantes  
Periodo: 3  
Turma: B  
Professor: Erico Souza Teixeira  
Tutor: Michael Alvez  
  
This repository has a C program that creates a child process and a pipe to comunicate between the two processes  

## Clone project

To run the program you'll need to clone this repository in your machine and compile the .c file, to clone the repository, simply use the following commmands in your terminal:

```bash
$ git clone https://github.com/jpedro7/pipe-paiEFilho.git
$ cd pipe-paiEFilho
```

## Run code

To execute the program, use the following commands in your terminal

```bash
$ make
```
The `make` command will compile, run and delete the target file

```bash
$ make bin
```
The `make bin` command will only compile the code

```bash
$ make run
```
The `make run` command will only run the compiled file

```bash
$ make clean
```
The `make clean` command will delete the compiled file  

The logic i used to this program was: if the variables were created in the main function, and before the fork, than it would have the same memory location for both processes, therefore, the son process can read the messages written from the father process.