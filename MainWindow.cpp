#include "MainWindow.h"
#include <QtWebKit>

#include "WebView.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled,true);

    WebView * webView = new WebView(this);
//    WebPage *page = new WebPage(webView);

////    page->mainFrame()->setUrl(QUrl(QString::fromUtf8("qrc:/Nitro/index.html")));

//    webView->setPage((QWebPage*)page);

    webView->setUrl(QUrl(QString::fromUtf8("qrc:/Nitro/index.html")));

    setCentralWidget(webView);

}

MainWindow::~MainWindow()
{
}
