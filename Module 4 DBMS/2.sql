-- Lab 1: Create a new database named school_db and a table called students
CREATE DATABASE school_db;

USE school_db;

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(100),
    age INT,
    class VARCHAR(50),
    address VARCHAR(255)
);

-- Lab 2: Insert five records into the students table
INSERT INTO students (student_id, student_name, age, class, address) VALUES
(101, 'Vikram', 20, 'TOPs', 'Ahmdabad'),
(102, 'Nikhil', 23, 'TOPs', 'Ahmdabad'),
(103, 'Kanishk', 22, 'TOPs', 'Ahmdabad'),
(104, 'Himanshi', 21, 'TOPs', 'Ahmdabad'),
(105, 'Aashish', 23, 'TOPs', 'Ahmdabad');

-- Lab 1: Write SQL queries to retrieve specific columns (student_name and age) from the students table.
SELECT student_name, age FROM students;

-- Lab 2: Write SQL queries to retrieve all students whose age is greater than 10.
SELECT * FROM students WHERE age > 10;

-- Retrieve all records using the SELECT statement
SELECT * FROM students;
