#include "WebView.h"
#include <QApplication>

WebView::WebView(QWidget *parent) :
    QWebView(parent)
{
    settings()->setAttribute(QWebSettings::OfflineStorageDatabaseEnabled,true);
    settings()->setAttribute(QWebSettings::OfflineWebApplicationCacheEnabled,true);
    settings()->setAttribute(QWebSettings::LocalStorageEnabled,true);
    settings()->setOfflineStoragePath(QApplication::applicationDirPath());
    settings()->setOfflineWebApplicationCachePath(QApplication::applicationDirPath());
    settings()->setLocalStoragePath(QApplication::applicationDirPath());
    settings()->setOfflineStorageDefaultQuota(5*1024*1024);
    settings()->setOfflineWebApplicationCacheQuota(5*1024*1024);
    settings()->setAttribute(QWebSettings::JavascriptCanOpenWindows,true);
    settings()->setAttribute(QWebSettings::JavascriptCanCloseWindows,true);
    settings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls,true);
    settings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls,true);
}

QWebView * WebView::createWindow(QWebPage::WebWindowType type)
{
    Q_UNUSED(type);

    WebView *webView = new WebView();
    QWebPage *newWeb = new QWebPage(webView);
    webView->setAttribute(Qt::WA_DeleteOnClose, true);
    webView->setPage(newWeb);
    webView->show();

    return webView;
}
