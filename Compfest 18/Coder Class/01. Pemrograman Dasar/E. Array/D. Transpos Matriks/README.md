# **D. Transpos Matriks**

time limit per test: 1 second\
memory limit per test: 64 megabytes

### **Deskripsi**

Untuk suatu matriks A berukuran N\*M, AT atau transpose matriks, merupakan hasil penukaran baris dan kolom dari matriks A. Secara formal,
$$[A^{T}]_{ij} = [A]_{ji}$$
Sehingga, $A^{T}$ pasti berukuran M\*N. Diberikan suatu matriks A, buatlah program yang dapat membuat transposnya!

### **Format Masukan**

Baris pertama berisi 2 buah bilangan bulat, N dan M, masing-masing menyatakan banyak baris dan kolom matriks A.

Baris kedua sampai N+1 masing-masing berisi M buah bilangan, dimana bilangan pada baris i kolom j menyatakan $A_{(i-1)j}$.

### **Format Keluaran**

M baris dengan masing-masing baris berisi N buah bilangan, yang menyatakan $A^{T}$. Pisahkan setiap bilangan dalam baris yang sama menggunakan spasi.

### **Contoh 1**

###### **Masukan**

```
2 3
1 3 4
5 1 2
```

###### **Keluaran**

```
1 5
3 1
4 2
```

### **Batasan**

- $1\le N, M\le 100$
- $1\le A_{ij}\le 100$

---

### **Additional Links:**

[![Download ZIP](<https://img.shields.io/badge/Download-Repository%20(ZIP)-blue?style=for-the-badge&logo=github>)](https://downgit.github.io/#/home?url=https://github.com/SirPseudocode/competitive-programming-journey/tree/main/Compfest%2018/Coder%20Class/01.%20Pemrograman%20Dasar/E.%20Array/D.%20Transpos%20Matriks)

---

<p align="center">
  <small><i>The problem statement, constraints, and test cases are from a Coderclass of CPC <a href="https://compfest.id" target"_blank">Compfest</a> 18.</i></small>
</p>
