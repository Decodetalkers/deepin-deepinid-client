#pragma once

#include <QtWebEngineWidgets/QWebEnginePage>
#include <QWebEngineUrlRequestInterceptor>


class WebUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{
    Q_OBJECT

public:
    typedef  QMap<QByteArray, QByteArray> Header;
    WebUrlRequestInterceptor(QObject *p = Q_NULLPTR): QWebEngineUrlRequestInterceptor(p) {}
    void interceptRequest(QWebEngineUrlRequestInfo &info);

    void setHeader(Header header) {this->header = header;};
private:
    Header header;
};


class LoginPage : public QWebEnginePage
{
    Q_OBJECT
public:
    explicit LoginPage(QObject *parent = nullptr) : QWebEnginePage(parent) {}
};
