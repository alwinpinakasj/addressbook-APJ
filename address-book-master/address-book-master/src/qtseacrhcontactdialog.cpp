#include "qtseacrhcontactdialog.h"
#include "contact.h"
#include "qtcontactform.h"

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>


QtSearchContactDialog::QtSearchContactDialog(Contact &c,
                                        QWidget *parent,
                                        Qt::WindowFlags f) :
                                        QDialog(parent, f),
                                        contactForm(new QtContactForm()),
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
    contactForm->lastNameField->setText(contactToEdit.lastName.c_str());
    contactForm->addressField->setText(contactToEdit.address.c_str());
    contactForm->phoneNumberField->setText(contactToEdit.phoneNumber.c_str());
    contactForm->emailField->setText(contactToEdit.email.c_str());
    contactForm->cityField->setText(contactToEdit.city.c_str());

}

void QtSearchContactDialog::accept()
{
    contactToEdit.firstName = contactForm->firstNameField->text().toStdString();
    contactToEdit.lastName = contactForm->lastNameField->text().toStdString();
    contactToEdit.address = contactForm->addressField->text().toStdString();
    contactToEdit.phoneNumber = contactForm->phoneNumberField->text().toStdString();
    contactToEdit.email = contactForm->emailField->text().toStdString();
    contactToEdit.city = contactForm->cityField->text().toStdString();
    QDialog::accept();

}
