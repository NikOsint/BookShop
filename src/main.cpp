#include "mainwin.h"

int main(int argc, char *argv[])
{
    /*
    Book b1("Book blya", "Fetisov Danila", "English", "HSE PRESS", 2020, 15, 300, 700, 0);
    ScienceBook b2("Science yopta book", "Savastyanova Sanya", "Russian", "MIEM", 2021, 10, 15, 150, 0, "OOP");
    EducationBook b3("Maths for lohs", "Osintsev Kolyas", "Russian", "HSE MERCH", 2021, 17, 70, 200, 0, "Maths", "Loh");
    FictionBook b4("Brehnya", "Daudov Rus", "Arab", "MGLU", 2020, 70, 54, 270, 0, "Horror", 18);

    std::cout << (b1 < b4) << std::endl;
    BookShop bsh{};
    for (size_t i = 0; i < 10; i++) {
        b1++;
        b2++;
        b3++;
        b4++;
        bsh.push(b1);
        bsh.push(b4);
        bsh.push(b3);
        bsh.push(b2);
        bsh.push(b2);
        bsh.push(b2);
        bsh.push(b2);
        bsh.push(b2);
    }

    bsh.write("C:/Users/User/Desktop/OOP/hueta.txt");
    bsh.read("C:/Users/User/Desktop/OOP/hueta.txt");

    std::cout << bsh["Science yopta book"] << std::endl;
    //bsh.remove("Book blya");
    bsh.print();
    */

    /*
    Book a[10];
    BookShop b;
    std::string s[10];
    for (int i = 10; i > 0; i--) {
        s[i-1] = (char)(i+50);
        a[i-1].setTitle(s[i-1]);
        b.push(a[i-1]);
    }
    b.print();
    */

#if SHOW_GUI
    QApplication a(argc, argv);
    Win w;
    w.show();
    return a.exec();
#else
    return 0;
#endif
}
