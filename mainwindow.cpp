#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dechiffrage.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_GetFile, &QPushButton::clicked, this,&MainWindow::exploreFile);
    connect(ui->pushButton_Get_Directory, &QPushButton::clicked, this,&MainWindow::exploreDirectory);
    connect(ui->textEdit_PassWord, &QTextEdit::textChanged,this,&MainWindow::GetPassWord);
    connect(ui->pushButton_Get_Message, &QPushButton::clicked, this,&MainWindow::textEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exploreFile()
{
    s_FilePath = QFileDialog::getOpenFileName(this, tr("Open File"),
                                            "/home",
                                              tr("Images (*.png *.xpm *.jpg)"));

}

void MainWindow::textEdit()
{
    if(s_FilePath !=NULL)
    {
        if ((s_DirectoryPath !=NULL)){
            if (s_PassWord !=NULL) {
                m_Dechiffrage->dechiffre(s_DirectoryPath,s_FilePath,s_PassWord);
                s_Message = m_Dechiffrage->message(s_DirectoryPath);
                ui->textEdit_Message->setText(s_Message);
                }
            else {
                ui->textEdit_Message->setText("No password");
            }
        }
        else {
            ui->textEdit_Message->setText("No directory | No password");
        }
    }
    else {
        ui->textEdit_Message->setText("No file | No directory | No password");
    }
}

void MainWindow::GetPassWord()
{
    s_PassWord = ui->textEdit_PassWord->toPlainText();
}

void MainWindow::exploreDirectory()
{
    s_DirectoryPath = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                        "/home",
                                                        QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);
}

