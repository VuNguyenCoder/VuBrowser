#ifndef VUBROWSER_H
#define VUBROWSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class VuBrowser; }
QT_END_NAMESPACE

class VuBrowser : public QMainWindow
{
    Q_OBJECT

public:
    VuBrowser(QWidget *parent = nullptr);
    ~VuBrowser();

private slots:
    void on_addressEdit_returnPressed();

    void on_backButton_clicked();

    void on_forwardButton_clicked();

    void on_helpButton_clicked();

    void on_webView_urlChanged(const QUrl &arg1);

private:
    Ui::VuBrowser *ui;
};
#endif // VUBROWSER_H
