# Relational Algebra Parser

İlişkisel cebir ifadelerini SQL betiklerine dönüştüren bir parser programı.

## 🔍 Proje Hakkında

Bu proje, ilişkisel cebir ifadelerini alıp, karşılık gelen SQL sorgularına dönüştüren bir parser uygulamasıdır. Veri tabanı teorisi ve uygulamalarıyla ilgilenenler için faydalı bir araçtır.

## ⚙️ Kurulum

Projeyi klonladıktan sonra aşağıdaki adımları izleyerek derleyebilirsiniz:

```bash
git clone https://github.com/Sayicon/Relational_Algebra_Parser.git
cd Relational_Algebra_Parser
make
```

Bu adımlar, `main.c` ve `parser_utils.c` dosyalarını derleyerek çalıştırılabilir bir program oluşturacaktır.

## 🚀 Kullanım

Programı çalıştırmak için terminalde aşağıdaki komutu kullanabilirsiniz:

```bash
./parser
```

Ardından, ilişkisel cebir ifadenizi girerek karşılık gelen SQL sorgusunu elde edebilirsiniz.

**Örnek:**

```bash
Giriş: σ(age = 20)(Person)
Çıkış: SELECT * FROM Person WHERE age = 20;
```

## 📁 Proje Yapısı

- `main.c`: Ana program dosyası.
- `parser_utils.c`: Parser yardımcı fonksiyonları.
- `parser.h`: Başlık dosyası.
- `Makefile`: Derleme talimatları.
- `libft/`: Yardımcı kütüphane dosyaları.

## 🚧 Geliştirme Durumu

Bu proje aktif olarak geliştirilmektedir. Planlanan bazı özellikler:

- Geliştirmeye yeni başlandı henüz çalışmamakta.
- Daha fazla ilişkisel cebir operatör desteği
- Hata kontrol sisteminin güçlendirilmesi
- Karmaşık iç içe sorguların desteklenmesi


## 🤝 Katkıda Bulunma

Katkılarınızı memnuniyetle karşılıyoruz! Hataları bildirmek veya yeni özellikler önermek için lütfen bir [issue](https://github.com/Sayicon/Relational_Algebra_Parser/issues) oluşturun veya bir [pull request](https://github.com/Sayicon/Relational_Algebra_Parser/pulls) gönderin.

## 📄 Lisans

Bu proje açık kaynaklıdır ve MIT Lisansı ile lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasına bakınız.
