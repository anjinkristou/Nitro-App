#include "MainWindow.h"
#include <QtWebKit>

#include "WebView.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setWindowIcon(QIcon(QString::fromUtf8(":/nitrotasks.png")));

    QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled,true);

    WebView * webView = new WebView(this);

    webView->setUrl(QUrl(QString::fromUtf8("qrc:/Nitro/index.html")));

    setCentralWidget(webView);

}

MainWindow::~MainWindow()
{
}
