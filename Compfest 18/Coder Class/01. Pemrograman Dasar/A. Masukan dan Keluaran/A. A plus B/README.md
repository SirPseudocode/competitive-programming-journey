# **A. A plus B**

time limit per test: 1 second\
memory limit per test: 64 megabytes

### **Deskripsi**

Salah satu kegunaan komputer yang sangat berguna adalah melakukan operasi matematika, seperti penjumlahan dan lainnya. Setelah "Hello World" versi CPC CompFest 8, kali ini anda akan melakukan penjumlahan. Hati-hati, karena angka yang diberikan bisa sangat besar!

### **Format Masukan**

Satu baris berisi dua buah bilangan bulat A dan B.

### **Format Keluaran**

Satu baris berisi sebuah bilangan bulat, hasil penjumlahan A dan B.

### **Contoh 1**

###### **Masukan**

```
8 16
```

###### **Keluaran**

```
24
```

---

### **Editorial** (id)

_by SirPseudocode (Last Checked/Updated on 15th July 2026)_

Perhatikan bahwa nilai dari A dan B merupakan bilangan bulat yang sangat besar, yaitu hingga $4\times 10^{18}\text{.}$ Selain itu keluaran yang diharapkan ialah hasil penjumlahan antara A dan B yang berarti pada kasus dengan nilai yang paling besar maka akan menghasilkan $4\times 10^{18} + 4\times 10^{18}$ atau $8\times 10^{18}\text{.}$ Oleh karena itu kita memerlukan tipe data yang dapat menampung angka sebesar itu. Kita dapat menggunakan tipe data `long long` dimana dapat menampung dari $-9\times 10^{18}$ hingga $9\times 10^{18}\text{.}$ Berikut kode finalnya:

```cpp
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll a, b;
	cin >> a >> b;

	cout << a + b << endl;
	return 0;
}
```

---

### **Additional Links:**

[![Download ZIP](<https://img.shields.io/badge/Download-Repository%20(ZIP)-blue?style=for-the-badge&logo=github>)](https://downgit.github.io/#/home?url=https://github.com/SirPseudocode/competitive-programming-journey/tree/main/Compfest%2018/Coder%20Class/01.%20Pemrograman%20Dasar/A.%20Masukan%20dan%20Keluaran/A.%20A%20plus%20B)

---

<p align="center">
  <small><i>The problem statement, constraints, and test cases are from Coder Class of CPC <a href="https://compfest.id" target"_blank">Compfest</a> 18.</i></small>
</p>
