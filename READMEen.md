# Get_next_line - 42 Project  

[![English](https://img.shields.io/badge/English-blue.svg)](./READMEen.md)   [![Français](https://img.shields.io/badge/Français-gray.svg)](./README.md)  

The **get_next_line** project consists of implementing a function capable of reading one line at a time from a file descriptor. This project aims to master input/output management, buffer handling, and dynamic memory management in the C language.  

## Description  

The `get_next_line` function must read an entire line from a given file descriptor without knowing the line's length in advance. It should efficiently handle buffered reading and allow alternating reading from multiple file descriptors.  

## Features  

- **Line-by-line reading**: Reads a complete line until a newline character (`\n`) or the end of the file.  
- **Multiple file descriptor handling**: Enables simultaneous reading from multiple files without interference.  
- **Efficient buffering**: Uses an optimized buffer size to minimize system calls and improve performance.  
- **Dynamic memory management**: Allocates and frees memory appropriately to prevent memory leaks and ensure program stability.  
- **Compatibility**: Works correctly with different types of files and descriptors, including standard input (`stdin`).  

## Objectives  

- **Master input/output operations** in C, particularly reading from file descriptors.  
- **Develop skills in buffer management** and dynamic string handling.  
- **Improve memory management** by using efficient dynamic allocations and avoiding memory leaks.  
- **Optimize code** to ensure high performance, even with large amounts of data or multiple file descriptors.  
