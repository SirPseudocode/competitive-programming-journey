# **B. Before an Exam**

time limit per test: 0.5 second\
memory limit per test: 64 megabytes

### **Description**

Tomorrow Peter has a Biology exam. He does not like this subject much, but $d$ days ago he learnt that he would have to take this exam. Peter's strict parents made him prepare for the exam immediately, for this purpose he has to study not lee than $minTime_{i}$ and not more than $maxTime_{i}$ hours per each _i_-th day. Moreover, they warned Peter that a day before the exam they would check how he has followed their instructions.

So, today is the day when Peter's parents ask him to show the timetable of his preparatory studies. but the boy has counted only the sum of hours $sumTime$ spent on preparation, and now he wants to know if he can show his parents a timetable $schedule$ with $d$ numbers, where each number $schedule_{i}$ stands for the time in hours spent by Peter each _i_-th day on biology studies, and satisfying the limitations imposed by his parents, and at the same time the sum total of all $schedule_{i}$ should be equal to $sumTime\text{.}$

### **Input**

The first input line contains two integer numbers $d\text{, }sumTime(1\le d \le 30\text{, }0\le sumTime\le 240)$ — the amount of days, during which Peter studied, and the total amount of hours, spent on preparation. Each of the following $d$ lines contains two integer numbers $minTime_{i}\text{, }maxTime_{i}(0\le minTimi_{i}\le maxTime_{i}\le 8)$

### **Output**

In the first line print $YES\text{,}$ and in the second line print $d$ numbers (separated by space), each of the numbers — amount of hours, spent by Peter on preparation in the corresponding day, if he followed his parent's instructions; or print $NO$ in the unique line. If there are many solutions, print any of them.

### **Examples 1**

###### **Input**

```
1 48
5 7
```

###### **Output**

```
NO
```

### **Examples 2**

###### **Input**

```
2 5
0 1
3 5
```

###### **Output**

```
YES
1 4
```

---

### **Additional Links:**

[![Problem Link](https://img.shields.io/badge/Codeforces-Problem%20Link-green?style=for-the-badge&logo=codeforces&logoColor=white)](https://codeforces.com/problemset/problem/4/B)
[![Download ZIP](<https://img.shields.io/badge/Download-Repository%20(ZIP)-blue?style=for-the-badge&logo=github>)](<https://downgit.github.io/#/home?url=https://github.com/SirPseudocode/competitive-programming-journey/tree/main/Codeforces/4.%20Codeforces%20Beta%20Round%204%20(Div.%202%20Only)/4B%20-%20Before%20an%20Exam>)

---

<p align="center">
  <small><i>The problem statement, constraints, and test cases are from <a href="https://codeforces.com" target"_blank">Codeforces</a>.</i></small>
</p>
