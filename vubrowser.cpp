#include "vubrowser.h"
#include "ui_vubrowser.h"

#include <QMessageBox>

VuBrowser::VuBrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VuBrowser)
{
    ui->setupUi(this);
}

VuBrowser::~VuBrowser()
{
    delete ui;
}


void VuBrowser::on_addressEdit_returnPressed()
{
    ui->webView->load(ui->addressEdit->text());
}


void VuBrowser::on_backButton_clicked()
{
    ui->webView->back();
}


void VuBrowser::on_forwardButton_clicked()
{
    ui->webView->forward();
}


void VuBrowser::on_helpButton_clicked()
{
    QMessageBox* helpBox = new QMessageBox;
    QString message = "Xin chao\n";
    message += "Day la trinh duyet cua VuNguyenCoder \n";
    message += "de xem JAV\n";
    helpBox->setText(message);
    helpBox->exec();
}


void VuBrowser::on_webView_urlChanged(const QUrl &arg1)
{
    ui->addressEdit->setText(ui->webView->url().toString());
}

