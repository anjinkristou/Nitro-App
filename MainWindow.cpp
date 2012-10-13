#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled,true);

    QWebSettings::globalSettings()->setAttribute(QWebSettings::OfflineStorageDatabaseEnabled,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::OfflineWebApplicationCacheEnabled,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalStorageEnabled,true);
    QWebSettings::globalSettings()->setOfflineStoragePath(QApplication::applicationDirPath());
    QWebSettings::globalSettings()->setOfflineWebApplicationCachePath(QApplication::applicationDirPath());
    QWebSettings::globalSettings()->setLocalStoragePath(QApplication::applicationDirPath());
    QWebSettings::globalSettings()->setOfflineStorageDefaultQuota(5*1024*1024);
    QWebSettings::globalSettings()->setOfflineWebApplicationCacheQuota(5*1024*1024);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::JavascriptCanOpenWindows,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::JavascriptCanCloseWindows,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls,true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
