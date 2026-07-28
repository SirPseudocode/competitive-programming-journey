# **C. Pusing Pusing String**

time limit per test: 1 second\
memory limit per test: 64 megabytes

### **Deskripsi**

Setelah sukses dengan detektor palindrom, kali ini Budi mencoba membuat alat baru yang dapat memanipulasi suatu string. Alat baru ini akan menerima suatu string S, dan memiliki 2 fungsi:

1. Diberikan A dan B, menukar karakter ke-A dan ke-B.
2. Diberikan L dan R, membalik substring pada rentang [L,R]. Sebagai contoh, jika S = "abcd", L = 1, dan R = 4, maka S' = "dcba".

Perhatikan bahwa disini indeks dimulai dari 1, dan hasil operasi-operasi tersebut bersifat permanen. Untuk mengetesnya, Budi akan melakukan Q buah operasi. Untuk mengetahui kebenaran alat yang Budi buat, ia meminta anda untuk mencari tahu hasil Q buah operasi tersebut. Bantulah Budi!

### **Format Masukan**

Baris pertama berisi dua buah bilangan bulat, N dan Q, masing-masing menyatakan panjang string dan banyak operasi.

Baris kedua berisi sebuah string S, yang memiliki panjang N.

Q baris berikutnya berisi salah satu dari dua operasi berikut:

- 1 A B, yang menyatakan operasi menukar karakter.
- 2 L R, yang menyatakan operasi membalik substring.

### **Format Keluaran**

Satu baris berisi sebuah string hasil semua operasi tersebut pada S.

### **Contoh 1**

###### **Masukan**

```
5 2
abcde
1 1 2
2 1 5
```

###### **Keluaran**

```
edcab
```

### **Batasan**

- $2\le N\le 1.000$
- $1\le Q\le 1.000$
- $1\le A < B\le N$
- $1\le L < R\le N$

---

### **Additional Links:**

[![Download ZIP](<https://img.shields.io/badge/Download-Repository%20(ZIP)-blue?style=for-the-badge&logo=github>)](https://downgit.github.io/#/home?url=https://github.com/SirPseudocode/competitive-programming-journey/tree/main/Compfest%2018/Coder%20Class/01.%20Pemrograman%20Dasar/D.%20Procedure%20Dan%20Function/C.%20Pusing%20Pusing%20String)

---

<p align="center">
  <small><i>The problem statement, constraints, and test cases are from a Coderclass of CPC <a href="https://compfest.id" target"_blank">Compfest</a> 18.</i></small>
</p>
