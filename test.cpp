/*
 *
 *
 *
 *
 */

#if QT_VERSION >= 0x050000
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#else
#include <QApplication>
#include <QDialog>
#endif

#include "mrichtextedit.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QDialog *dialog = new QDialog(0);
    MRichTextEdit *rte = new MRichTextEdit(dialog);
    QGridLayout *gl = new QGridLayout(dialog);
    gl->addWidget(rte,0,0,1,1);
    dialog->setWindowTitle(QObject::tr("Rich text editor"));
    dialog->setMinimumWidth (400);
    dialog->setMinimumHeight(400);
    dialog->show();

    return app.exec();;
}
