#ifndef SEARCHCONTACTDIALOG_H
#define SEARCHCONTACTDIALOG_H

#include <QDialog>
#include <QWidget>
#include "qtsearchform.h"
#include "contact.h"

/***********************************************************************
    Class: QtEditContactDialog

    Author: Phil Grohe

    Qt Dialog presenting a form to edit an existing contact
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

#endif
