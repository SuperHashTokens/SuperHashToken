#ifndef SuperHashTokenADDRESSVALIDATOR_H
#define SuperHashTokenADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class SuperHashTokenAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit SuperHashTokenAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // SuperHashTokenADDRESSVALIDATOR_H
