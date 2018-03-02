#include "mainwindow.h"
#include <QApplication>
#include <QWebEngineView>
#include <QUrl>

QUrl new_team_url(const QWebEngineView& web_view, const QString& userInput)
{
   if (userInput.isEmpty())
       return QUrl::fromUserInput("https://slack.com/signin");
   const QUrl result = QUrl::fromUserInput(userInput);
   return result.isValid() ? result : Qurl::fromUserInput("https://slack.com/signin");
}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);



    QWebEngineView view;
    view.setUrl();
    view.resize(1024, 750);
    view.show();

    return app.exec();
}
