#ifndef QTSEACRHCONTACTDIALOG_H
#define QTSEACRHCONTACTDIALOG_H

#include <QDialog>
#include <QWidget>
#include "qtsearchform.h"
#include "contact.h"

/***********************************************************************

***********************************************************************/

class QtSearchContactDialog : public QDialog
{
    Q_OBJECT

    public:
        QtSearchContactDialog(Contact &c, QWidget *parent=0, Qt::WindowFlags f=0);

    public slots:
        void accept();

    private:
        void fillForm();

        QtSearchForm *contactForm;
        Contact &contactToEdit;

};



#endif // QTSEARCHCONTACTDIALOG_H

