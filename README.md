# Smart Study Schedule
==========================================================================
DOKUMENTASI RANCANGAN & STUDI KASUS MINI PROJECT
Nama Proyek   : Smart Study Schedule (Sistem Pengelolaan Tugas & Jadwal Kuliah)
Mata Kuliah   : Praktikum Pemrograman / Pemrograman Dasar (C++)
Kelompok      : Tiga (3)
Kelas	        : ILKOM A

Ketua	        : Muhamad Fahri al Basith (2617051010)
Anggota       :
1. Andini Tria Efendi        (2617051001)
2. Suci Widianti             (2617051013)
3. Andiska Farel Adiwangsa   (2617051032)
4. Sevinna Vierlyani         (2617051034)
5. Bahrul Musalim Ridho      (2617051038)
=======================================================================

Tema Project: Sistem Manajemen Tugas Kuliah
Nama Project: Smart Study Schedule

1.LATAR BELAKANG & STUDI KASUS:
Sebagai seorang mahasiswa, rutinitas belajar sangat sibuk mulai dari mencatat jadwal perkuliahan, mengawasi tugas-tugas akademik, sampai mengatur waktu pengerjaan tugas hingga tenggat waktunya. Banyak mahasiswa mengalami kesulitan dalam menentukan tugas mana yang harus dikerjakan lebih dulu atau lupa bagaimana kondisi pekerjaan tugasnya. Karena itu, tim kami membuat program berbasis konsol menggunakan bahasa C++ untuk membantu mengotomatisasi proses pencatatan tugas serta menentukan prioritas tugas secara sistematis.

2. SOLUSI YANG DIBERIKAN:
Program "Smart Study Schedule" yang kami buat menawarkan beberapa solusi berikut:
•Fitur penambahan data tugas baru yang sudah lengkap dengan nama mata kuliah dan sisa hari deadline.
•Sistem penentuan prioritas otomatis berdasarkan sisa hari dengan kategori Deadline Hari Ini, Tinggi, Sedang, dan Rendah.
•Fitur untuk memantau apakah tugas sudah selesai atau belum selesai.
•Fitur pembaruan status tugas aktif saat tugas sudah selesai dikerjakan.
•Fitur ini menampilkan daftar ulang semua mata kuliah yang sedang aktif.

3.PENERAPAN KONSEP PEMROGRAMAN C++ DALAM KODINGAN
Array berukuran tetap. Data disimpan dalam empat array yang berjalan paralel, yaitu mataKuliah, namaTugas, deadline, dan status. Kapasitasnya dibatasi oleh konstanta const int MAX = 100, sehingga program bisa menampung sampai 100 tugas. Data satu tugas ditemukan lewat nomor indeks yang sama di keempat array.
Fungsi. Program dibagi menjadi beberapa fungsi supaya lebih rapi dan mudah dibaca:
-tentukanPrioritas(int hari) menentukan prioritas tugas dari sisa hari menuju deadline, lalu mengembalikannya dalam bentuk string.
-tambahTugas() menerima input tugas baru. Fungsi ini juga memeriksa apakah kapasitas masih cukup dan menolak nilai yang negatif.
-tampilkanTugas() menampilkan seluruh daftar tugas lengkap dengan status dan prioritasnya.
-selesaikanTugas() mengubah status sebuah tugas menjadi selesai berdasarkan nomor indeksnya.
-tampilkanMataKuliah() menampilkan rekap daftar mata kuliah.
Perulangan dan percabangan. Menu utama dijalankan dengan do-while, sehingga program terus berjalan dan bisa dipakai berulang kali sampai pengguna memilih Keluar (pilihan 5). Pilihan menu diproses dengan switch-case, sedangkan if-else dipakai untuk pengecekan kondisi di dalam fungsi, misalnya validasi input dan penentuan prioritas.
