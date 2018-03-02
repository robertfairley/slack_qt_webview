#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    QCoreApplication::quit();
}

void MainWindow::on_actionChange_Team_triggered()
{
    bool ok;
    QString text = QInputDialog::getText(this, tr("Change Slack Team..."),
                                         tr("Team name:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok);
    if (ok && !test.isEmpty())
        textLabel->setText(text);
}
