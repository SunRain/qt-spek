#include <QApplication>
#include "spek-spectrogram.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SpekSpectrogram w;
    w.show();

    w.open("/media/wangguojian/MEDIA/music/Soloist.mp3");

    return a.exec();
}
