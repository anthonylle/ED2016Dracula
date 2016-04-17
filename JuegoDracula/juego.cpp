#include "juego.h"
#include "ui_juego.h"
#include "carta.h"

#include <QtCore>
#include <QtDebug>

#include "qdialog.h"
#include <iostream>
using namespace std;

//Atributos para manejar el reloj del juego
int segundos = 0;
int minutos = 0;
int horas = 0;

Juego::Juego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Juego)
{
    ui->setupUi(this);



    //Inicialización de la variable reloj que está declarada en juego.h
    reloj = new QTimer(this);

    //Método que conecta 2 objetos, en este caso el reloj y this (el widget) con sus respectivas señales:
    //reloj: Señal = timeout() ------  this(widget): Señal = miSlot (método que recibe el timeout)

    connect(reloj,SIGNAL(timeout()),this,SLOT(correrReloj()));
    reloj->start(1000);//Aquí es donde se pone a circular el reloj con un intervalo de 1000 milisegundos
}

void Juego::correrReloj(){ //Acá se programa el método miSlot el cual es un Slot que recibe la señal "timeout()" del reloj

    ui->lblTiempo->setFont(QFont("Arial",36));//Se define una fuente para el label del tiempo en el ui
    //Se concatena un QString con los valores horas:minutos:segundos junto con los dos puntos separadores entre sí
    ui->lblTiempo->setText(QString::number(horas)+ ":" + QString::number(minutos) + ":" + QString::number(segundos));

    //Se incrementa el valor de los segundos para cada vez que llega una señal
    segundos += 1;
    //Se validan los valores de las variables para realizar los cambios y que el valor muestre los números del tiempo
    //iguales a como se usan normalmente. 60 segundos = 1 min ; 60 min = 1 hora.
    if(segundos == 60){
        segundos = 0;
        minutos += 1;
        if(minutos == 60){
            minutos = 0;
            horas += 1;
        }
    }
}

Juego::~Juego()
{
    delete ui;
}


 //Descripción: Función que retorna el nombre del archivo .png donde se va a mostrar el ícono en el botón del juego
 //Entradas: Una carta de tipo Carta
 //Salidas: Un QString con el nombre del archivo que se va a utilizar para ponerle un ícono al botón

string Juego::generarPathIcono(Carta carta){

    string nombre = carta.getNombre();
    string color = carta.getColor();
    string simbolo = carta.getSimbolo();

    string filePath = ":/cards/cards/";
    if(carta.getNombre() == "joker"){
        filePath.append(nombre);
        filePath.append("_");
        filePath.append(color);
        filePath.append(".png");
    }
    else{
        filePath.append(nombre);
        filePath.append("_");
        filePath.append(simbolo);
        filePath.append(".png");
    }
    return filePath;
}

//-------------------------------------- ACCIONES DE LOS BOTONES (DON'T TOUCH THEM :) )-------------------------

void Juego::bloquearBotones(QPushButton *boton){
    ui->btnCarta1Jugador1->setEnabled(false);
    ui->btnCarta2Jugador1->setEnabled(false);
    ui->btnCarta3Jugador1->setEnabled(false);
    ui->btnCarta4Jugador1->setEnabled(false);
    ui->btnCarta1Jugador2->setEnabled(false);
    ui->btnCarta2Jugador2->setEnabled(false);
    ui->btnCarta3Jugador2->setEnabled(false);
    ui->btnCarta4Jugador2->setEnabled(false);

    boton->setEnabled(true);
}


void Juego::evaluaCampo(){

    // columnas, Columns, vertical

    int resultadoColumna1 = campo.evaluaFilaVertical(0);
    ui->lblScoreColumn0->setText(QString::number(resultadoColumna1));

    int resultadoColumna2 = campo.evaluaFilaVertical(1);
    ui->lblScoreColumn1->setText(QString::number(resultadoColumna2));

    int resultadoColumna3 = campo.evaluaFilaVertical(2);
    ui->lblScoreColumn2->setText(QString::number(resultadoColumna3));

    // hileras, row, horizontales

    int resultadoHilera1 = campo.evaluaFilaHorizontal(0);
    ui->lblScoreRow0->setText(QString::number(resultadoHilera1));

    int resultadoHilera2 = campo.evaluaFilaHorizontal(1);
    ui->lblScoreRow1->setText(QString::number(resultadoHilera2));

    int resultadoHilera3 = campo.evaluaFilaHorizontal(2);
    ui->lblScoreRow2->setText(QString::number(resultadoHilera3));

}

/**
 * Descripción: Habilita los botones del jugador elegido
 * Precondiciones: El parámetro debe ser un número entero entre 1-2
 * Poscondiciones: Sin definir.
 * */
void Juego::desbloquearBotonesJugador(int jugador){
    if(jugador == 1){
        ui->btnCarta1Jugador1->setEnabled(true);
        ui->btnCarta2Jugador1->setEnabled(true);
        ui->btnCarta3Jugador1->setEnabled(true);
        ui->btnCarta4Jugador1->setEnabled(true);
    }
    else{
        ui->btnCarta1Jugador2->setEnabled(true);
        ui->btnCarta2Jugador2->setEnabled(true);
        ui->btnCarta3Jugador2->setEnabled(true);
        ui->btnCarta4Jugador2->setEnabled(true);
    }
}



void Juego::ponerImagenCartasMano(int jugador){
    if(jugador == 1){
        ui->btnCarta1Jugador1->setIcon(campo.getIcono(1, 0));
        ui->btnCarta2Jugador1->setIcon(campo.getIcono(1, 1));
        ui->btnCarta3Jugador1->setIcon(campo.getIcono(1, 2));
        ui->btnCarta4Jugador1->setIcon(campo.getIcono(1, 3));
    }
    else{
        ui->btnCarta1Jugador2->setIcon(campo.getIcono(2, 0));
        ui->btnCarta2Jugador2->setIcon(campo.getIcono(2, 1));
        ui->btnCarta3Jugador2->setIcon(campo.getIcono(2, 2));
        ui->btnCarta4Jugador2->setIcon(campo.getIcono(2, 3));
    }
}


void Juego::on_btnMazo_clicked()
{
    campo.reparteCartas(2);

    cout<<"----------------empieza campo de juego tests -----------------"<<endl;
    cout<<"mano 1: \n" +campo.imprimeMano(1)<<endl;
    cout<<"mano 2: \n" + campo.imprimeMano(2)<<endl;
    //cout<<campo.imprimeCampo()<<endl;
    cout<<"----------------termina campo de juego -----------------"<<endl;

    //ui->btnCarta1Jugador1->setIcon(campo.getIcono(1,0));
    //campo.getManoJugador(1).goToPos(0);


    //std::cout<<campo.imprimeMano(1)<<endl;
    //std::cout<<campo.imprimeMano(2)<<endl;

    ponerImagenCartasMano(1);
    ponerImagenCartasMano(2);

    ui->btnMatriz5->setIcon(campo.getIcono(3,1,1));

    std::cout<<"El mazo tiene "<<campo.getSizeMazo()<<endl;

    ui->btnMazo->setEnabled(false);

}


void Juego::on_btnCarta1Jugador1_clicked()
{
    cartaActual = 0;
    jugadorActual = 1;
    bloquearBotones(ui->btnCarta1Jugador1);
}

void Juego::on_btnCarta2Jugador1_clicked()
{
    cartaActual = 1;
    jugadorActual = 1;
    bloquearBotones(ui->btnCarta2Jugador1);
}

void Juego::on_btnCarta3Jugador1_clicked()
{
    cartaActual = 2;
    jugadorActual = 1;
    bloquearBotones(ui->btnCarta3Jugador1);
}

void Juego::on_btnCarta4Jugador1_clicked()
{
    cartaActual = 3;
    jugadorActual = 1;
    bloquearBotones(ui->btnCarta4Jugador1);
}

void Juego::on_btnCarta1Jugador2_clicked()
{
    cartaActual = 0;
    jugadorActual = 2;
    bloquearBotones(ui->btnCarta1Jugador2);
}

void Juego::on_btnCarta2Jugador2_clicked()
{
    cartaActual = 1;
    jugadorActual = 2;
    bloquearBotones(ui->btnCarta2Jugador2);
}

void Juego::on_btnCarta3Jugador2_clicked()
{
    cartaActual = 2;
    jugadorActual = 2;
    bloquearBotones(ui->btnCarta3Jugador2);
    //ui->btnCarta3Jugador2->setVisible(false);
}

void Juego::on_btnCarta4Jugador2_clicked()
{
    cartaActual = 3;
    jugadorActual = 2;
    bloquearBotones(ui->btnCarta4Jugador2);
}

//------------------------------------ FIN DE LAS ACCIONES DE LOS BOTONES --------------------------------------


//                                     Botones de la matriz: Acciones
void Juego::on_btnMatriz1_clicked()
{
    ui->btnMatriz1->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,0,0);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz2_clicked()
{
    ui->btnMatriz2->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,1,0);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz3_clicked()
{
    ui->btnMatriz3->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,2,0);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz4_clicked()
{
    ui->btnMatriz4->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,0,1);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz6_clicked()
{
    ui->btnMatriz6->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,2,1);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz7_clicked()
{
    ui->btnMatriz7->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,0,2);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz8_clicked()
{
    ui->btnMatriz8->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,1,2);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

void Juego::on_btnMatriz9_clicked()
{
    ui->btnMatriz9->setIcon(campo.getIcono(jugadorActual,cartaActual,1));
    campo.moverCartaJugadorACampo(jugadorActual,cartaActual,2,2);
    ponerImagenCartasMano(jugadorActual);
    desbloquearBotonesJugador(1);
    desbloquearBotonesJugador(2);
}

