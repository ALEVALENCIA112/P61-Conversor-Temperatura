#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Conversor; }
QT_END_NAMESPACE

class Conversor : public QDialog
{
    Q_OBJECT

public:
    Conversor(QWidget *parent = nullptr);
    ~Conversor();

public slots:
    void cent2fahr_kel(int grados);

    void fahr2cent_kel(int grados);

    void kel2cent_fahr(int grados);

private:
    Ui::Conversor *ui;
};
#endif // CONVERSOR_H
