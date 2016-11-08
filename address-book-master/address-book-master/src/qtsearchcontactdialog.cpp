#include "qtsearchcontactdialog.h"

#include "contact.h"
#include "qtSearchform.h"
#include "qteditcontactdialog.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>


QtSearchContactDialog::QtSearchContactDialog(Contact &c,
                                        QWidget *parent,
                                        Qt::WindowFlags f) :
                                        QDialog(parent, f),
                                        contactForm(new QtSearchForm()),
                                        contactToEdit(c)
{
    QVBoxLayout *mainContainer = new QVBoxLayout();
    mainContainer->addLayout(contactForm);

    QHBoxLayout *buttonContainer = new QHBoxLayout();
    QPushButton *okButton = new QPushButton("OK");
    QPushButton *cancelButton = new QPushButton("Cancel");
    buttonContainer->addWidget(okButton);
    buttonContainer->addWidget(cancelButton);
    mainContainer->addLayout(buttonContainer);

    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));

    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));

    fillForm();
    setLayout(mainContainer);
    setWindowTitle("Search Contact");
}

void QtSearchContactDialog::fillForm()
{
    contactForm->firstNameField->setText(contactToEdit.firstName.c_str());


}

void QtSearchContactDialog::accept()
{
    contactToEdit.firstName = contactForm->firstNameField->text().toStdString();

    QDialog::accept();

}
