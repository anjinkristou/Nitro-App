#include "WebPage.h"

#include <QNetworkRequest>
#include <QDesktopServices>
#include <QApplication>
#include <QDebug>

WebPage::WebPage(QWidget *parent) :
    QWebPage(parent)
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

//bool WebPage::acceptNavigationRequest(QWebFrame *frame, const QNetworkRequest &request, NavigationType type) {
//    Q_UNUSED(frame);

//    qDebug() << "acceptNavigationRequest: " << request.url();
//    qDebug() << "Type: " << type;
//    QDesktopServices::openUrl(request.url());

//    return true;
//}

//QWebPage * WebPage::createWindow(WebWindowType type) {
//    Q_UNUSED(type);
//    qDebug() << "createWindow: " << type ;
//    return new WebPage();
//}
