# **C. Hanoi Solver**

time limit per test: 1 second\
memory limit per test: 64 megabytes

### **Deskripsi**

Apakah anda tahu tentang Menara Hanoi? Menara Hanoi merupakan permainan dengan 3 tiang dan N cakram, yang ukurannya berbeda-beda semua. Awalnya, semua cakram berada pada salah satu tiang, dan terurut, dengan cakram terbesar berada di paling bawah dan cakram terkecil berada di paling atas. Sebut saja tiang ini tiang A, dan dua tiang lainnya tiang B dan tiang C. Tujuan permainan ini adalah memindahkan N cakram tersebut ke tiang C dengan aturan berikut:

- Pada satu waktu, hanya satu cakram yang boleh dipindahkan.
- Cakram yang boleh dipindahkan merupakan cakram yang berada di posisi paling atas salah satu tiang. Cakram akan dipindahkan ke posisi paling atas salah satu tiang yang lain.
- Pada saat memindahkan, cakram yang dipindahkan tidak boleh lebih besar dari cakram teratas tiang tujuan.

Tentunya, pada akhirnya cakram-cakram itu akan terurut seperti semula, hanya saja berada pada tiang C. Diberikan N, banyak cakram, anda harus mengeluarkan solusi pemindahan cakram-cakram tersebut yang membutuhkan langkah paling sedikit.

### **Format Masukan**

Satu baris berisi sebuah bilangan bulat N, banyaknya cakram. Cakram-cakram tersebut memiliki ukuran 1 sampai N.

### **Format Keluaran**

Beberapa baris, dengan setiap baris memiliki format "X Y Z", yang berarti memindahkan cakram berukuran X dari puncak tiang Y ke puncak tiang Z.

### **Contoh 1**

###### **Masukan**

```
3
```

###### **Keluaran**

```
1 A C
2 A B
1 C B
3 A C
1 B A
2 B C
1 A C
```

### **Batasan**

- $1\le N\le 10$

---

### **Additional Links:**

[![Download ZIP](<https://img.shields.io/badge/Download-Repository%20(ZIP)-blue?style=for-the-badge&logo=github>)](https://downgit.github.io/#/home?url=https://github.com/SirPseudocode/competitive-programming-journey/tree/main/Compfest%2018/Coder%20Class/01.%20Pemrograman%20Dasar/F.%20Rekursi/C.%20Hanoi%20Solver)

---

<p align="center">
  <small><i>The problem statement, constraints, and test cases are from a Coderclass of CPC <a href="https://compfest.id" target"_blank">Compfest</a> 18.</i></small>
</p>
