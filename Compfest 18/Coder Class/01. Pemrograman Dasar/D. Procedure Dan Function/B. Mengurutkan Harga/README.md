# **B. Mengurutkan Harga**

time limit per test: 1 second\
memory limit per test: 64 megabytes

### **Deskripsi**

Di toko kelontong milik keluarga anda, terdapat N barang, dengan harga barang ke-i bernilai $A_{i}\text{.}$ Anda diminta untuk mengurutkan barang-barang tersebut, terurut menaik sesuai harganya. Untuk melakukannya, anda membuat program. Agar anda bisa mendeteksi seandainya terjadi kesalahan, anda pun memberikan perintah yang mempermudah debugging. Akhirnya, program anda memiliki alur seperti berikut:

```
for i := 1 to N
    for j := i+1 to N
        if Ai > Aj
            swap(Ai, Aj)
            println "i j"
```

Tentukanlah hasil keluaran program anda tersebut!

### **Format Masukan**

Baris pertama berisi sebuah bilangan bulat N, banyak barang di toko kelontong.

Baris selanjutnya berisi N buah bilangan bulat $A_{i}\text{,}$ harga tiap barang di toko kelontong.

### **Format Keluaran**

Beberapa baris, hasil keluaran program yang anda buat.

### **Contoh 1**

###### **Masukan**

```
4
3 2 4 1
```

###### **Keluaran**

```
1 2
1 4
2 4
3 4
```

### **Batasan**

- $1\le N\le 100$
- $1\le A_{i}\le 100$

---

### **Additional Links:**

[![Download ZIP](<https://img.shields.io/badge/Download-Repository%20(ZIP)-blue?style=for-the-badge&logo=github>)](https://downgit.github.io/#/home?url=https://github.com/SirPseudocode/competitive-programming-journey/tree/main/Compfest%2018/Coder%20Class/01.%20Pemrograman%20Dasar/D.%20Procedure%20Dan%20Function/B.%20Mengurutkan%20Harga)

---

<p align="center">
  <small><i>The problem statement, constraints, and test cases are from a Coderclass of CPC <a href="https://compfest.id" target"_blank">Compfest</a> 18.</i></small>
</p>
