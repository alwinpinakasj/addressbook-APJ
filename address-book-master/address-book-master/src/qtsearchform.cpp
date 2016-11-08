#include "qtsearchform.h"
#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtsearchform.h"



QtSearchForm::QtSearchForm(QWidget *parent) :
        QFormLayout(parent), firstNameField(new QLineEdit())

{
    addRow("First Name", firstNameField);

}

void QtSearchForm::clear()
{
    firstNameField->setText("");

}
